def encrypt(string, key):
    """Encrypts a string using a Caesar cipher with the given key."""
    result = ""
    for char in string:
        if char.isalpha():
            shifted = (ord(char) - 97 + key) % 26 + 97 # Shifts lowercase letters by key
            result += chr(shifted)
        elif char.isnumeric():
            shifted = (int(char) + key) % 10 # Shifts digits by key
            result += str(shifted)
        else:
            result += char # Leaves other characters unchanged
    return result

def decrypt(string, key):
    """Decrypts a string encrypted with a Caesar cipher using the given key."""
    result = ""
    for char in string:
        if char.isalpha():
            shifted = (ord(char) - 97 - key) % 26 + 97 # Shifts lowercase letters backwards by key
            result += chr(shifted)
        elif char.isnumeric():
            shifted = (int(char) - key) % 10 # Shifts digits backwards by key
            result += str(shifted)
        else:
            result += char # Leaves other characters unchanged
    return result

# Prompt the user for input
message = input("Enter a message to encrypt: ")
key = int(input("Enter the key number (0-25): "))

# Encrypt the message
encrypted_message = encrypt(message, key)
print("Encrypted message:", encrypted_message)

# Allow the user to decrypt the message
while True:
    choice = input("Decrypt message? (y/n): ").lower()
    if choice == "y":
        decrypted_message = decrypt(encrypted_message, key)
        print("Decrypted message:", decrypted_message)
        break
    elif choice == "n":
        break