import xml.etree.ElementTree as ET
import base64

# Load file XML
tree = ET.parse("xl/macrosheets/sheet1.xml")
root = tree.getroot()

# Namespace standar Excel XML
ns = {"main": "http://schemas.openxmlformats.org/spreadsheetml/2006/main"}

b64_string = ""
# Ekstrak sel C5 sampai C2230
for r_index in range(5, 2231):
    cell_ref = f"C{r_index}"
    # Cari sel berdasarkan referensi baris/kolom
    for cell in root.findall(f".//main:c[@r=\"{cell_ref}\"]", ns):
        # Cari tag <t> di dalam <is>
        t_tag = cell.find(".//main:t", ns)
        if t_tag is not None and t_tag.text:
            b64_string += t_tag.text

print("\n[+] Berhasil mengekstrak Base64 sepanjang", len(b64_string), "karakter.")
print("\n--- Decoded PowerShell Script ---")

try:
    # Decode dari Base64 dan UTF-16LE (format standar PowerShell)
    decoded_bytes = base64.b64decode(b64_string)
    ps_script = decoded_bytes.decode("utf-16le")
    
    # Tampilkan script (dibatasi 1000 karakter pertama agar tidak memenuhi layar jika terlalu panjang)
    print(ps_script[:1000])
    print("...\n[TAMPILAN DIPOTONG UNTUK KETERBACAAN]")
    
    # Simpan full script ke file untuk dianalisis lebih lanjut
    with open("payload_decoded.ps1", "w") as f:
        f.write(ps_script)
    print("\n[+] Full script berhasil disimpan ke: payload_decoded.ps1")

except Exception as e:
    print("Error decoding:", e)
