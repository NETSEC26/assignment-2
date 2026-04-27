with open("raw-payload.txt", "r") as file:
    obfuscated_data = file.read()

obfuscated_data = obfuscated_data.replace('PDmWjdfb += "', '').replace('";', '').replace('\n', '')

# Apply the malware's own decoding logic
junk_string = "sijRysBVHh"
clean_data = obfuscated_data.replace(junk_string, "")

print("--- LAYER 1 DECODED ---")

with open ("decoded-layer-1", "w") as f:
        f.write(clean_data)