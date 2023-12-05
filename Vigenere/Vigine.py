
def vigenere_enc(plaintext, key):
    encrypted_text = ""
    key_length = len(key)
    for i in range(len(plaintext)):
        
        char = plaintext[i]
        if char.isalpha():
            key_char = key[i % key_length]
            shift = ord(key_char.lower()) - ord('a')
            if char.isupper():
                encrypted_char = chr((ord(char) - ord('A') + shift) % 26 + ord('A'))
            else:
                encrypted_char = chr((ord(char) - ord('a') + shift) % 26 + ord('a'))
        else:
            encrypted_char = char
        encrypted_text += encrypted_char
    return encrypted_text

def vigenere_dec(ciphertext, key):
    decrypted_text = ""
    key_length = len(key)
    for i in range(len(ciphertext)):
        char = ciphertext[i]
        if char.isalpha():
            key_char = key[i % key_length]
            shift = ord(key_char.lower()) - ord('a')
            if char.isupper():
                decrypted_char = chr((ord(char) - ord('A') - shift + 26) % 26 + ord('A'))
            else:
                decrypted_char = chr((ord(char) - ord('a') - shift + 26) % 26 + ord('a'))
        else:
            decrypted_char = char
        decrypted_text += decrypted_char
    return decrypted_text


plaintext = "Hello, World9"
key = "KEY"
encrypted_text = vigenere_enc(plaintext, key)
print("Encrypted: " + encrypted_text)

decrypted_text = vigenere_dec(encrypted_text, key)
print("Decrypted: " + decrypted_text)
