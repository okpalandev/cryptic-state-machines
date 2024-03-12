class CrypticStateMachine:
    def __init__(self):
        pass

    def encrypt(self, message, shift):
        """
        Encrypts the message using Caesar cipher with the given shift.
        """
        encrypted_message = ""
        for char in message:
            if char.isalpha():
                ascii_offset = ord('a') if char.islower() else ord('A')
                encrypted_message += chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
            else:
                encrypted_message += char
        return encrypted_message

    def decrypt(self, encrypted_message, shift):
        """
        Decrypts the encrypted message using Caesar cipher with the given shift.
        """
        decrypted_message = ""
        for char in encrypted_message:
            if char.isalpha():
                ascii_offset = ord('a') if char.islower() else ord('A')
                decrypted_message += chr((ord(char) - ascii_offset - shift) % 26 + ascii_offset)
            else:
                decrypted_message += char
        return decrypted_message

    def all_encryptions(self, message):
        """
        Generates all possible encrypted messages for the given input message.
        """
        for shift in range(26):
            yield self.encrypt(message, shift)


# Usage
cryptic_state_machine = CrypticStateMachine()
message = "I never said she stole my money"
all_encrypted_messages = list(cryptic_state_machine.all_encryptions(message))
for i, encrypted_message in enumerate(all_encrypted_messages):
    print(f"Shift {i}: {encrypted_message}")
