def vigenere_enc(plaintext, key):
    encrypted_text = ""
    key_length = len(key)
    for i in range(len(plaintext)):
        char = plaintext[i]
        key_char = key[i % key_length]

        shift = ord(key_char)  

        encrypted_char = chr((ord(char) + shift) % 256)
        encrypted_text += encrypted_char

    return encrypted_text

def vigenere_dec(ciphertext, key):
    decrypted_text = ""
    key_length = len(key)
    for i in range(len(ciphertext)):
        char = ciphertext[i]
        key_char = key[i % key_length]

        shift = ord(key_char)  

        decrypted_char = chr((ord(char) - shift) % 256)
        decrypted_text += decrypted_char

    return decrypted_text

plaintext = "Hello World"
key = "KEY"
encrypted_text = vigenere_enc(plaintext, key)
print("Encrypted: " + encrypted_text)

decrypted_text = vigenere_dec(encrypted_text, key)
print("Decrypted: " + decrypted_text)
