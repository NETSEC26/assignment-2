import base64
import gzip
import re
from Crypto.Cipher import AES

# 1. Baca file PowerShell yang sudah kamu temukan
print("[*] Membaca payload_decoded.ps1...")
with open("payload_decoded.ps1", "r") as f:
    content = f.read()

# 2. Ekstrak Base64 menggunakan Regex
payload_b64 = re.search(r"\$LHhIy='(.*?)'", content).group(1)
key_b64 = re.search(r"\$95dehfo='(.*?)'", content).group(1)
iv_b64 = re.search(r"\$xhMYrQq='(.*?)'", content).group(1)

# 3. Decode dari Base64 ke Byte
enc_data = base64.b64decode(payload_b64)
key = base64.b64decode(key_b64)
iv = base64.b64decode(iv_b64)

# 4. Dekripsi AES-CBC
print("[*] Mendekripsi AES...")
cipher = AES.new(key, AES.MODE_CBC, iv)
decrypted = cipher.decrypt(enc_data)

# Hapus PKCS7 Padding
pad_len = decrypted[-1]
decrypted = decrypted[:-pad_len]

# 5. Dekompresi GZIP
print("[*] Mendekompresi GZIP...")
final_payload = gzip.decompress(decrypted)

# 6. Simpan hasil akhirnya sebagai file executable
with open("final_payload.bin", "wb") as f:
    f.write(final_payload)

print("[+] Berhasil! Payload terakhir disimpan sebagai: final_payload.bin")
