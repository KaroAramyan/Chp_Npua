import random

def generate_random_key():
    return random.randint(1, 25)  # Generate a random key between 1 and 25

def encrypt(text, key):
    encrypted_text = ""
    for char in text:
        if char.isalpha():  # Check if the character is a letter
            shift = 65 if char.isupper() else 97  # ASCII value of 'A' or 'a'
            encrypted_char = chr((ord(char) - shift + key) % 26 + shift)
            encrypted_text += encrypted_char
        else:
            encrypted_text += char  # Keep non-alphabetical characters unchanged
    return encrypted_text

def decrypt(text, key):
    return encrypt(text, -key)  # Decrypting is just like encrypting with the negative key

# Generate a random key
key = generate_random_key()  

# Input text
plaintext = "Hello, World!"

# Encrypt the text
ciphertext = encrypt(plaintext, key)
print(f"Encrypted text: {ciphertext} (Key: {key})")

# Decrypt the text
decrypted_text = decrypt(ciphertext, key)
print(f"Decrypted text: {decrypted_text}")
