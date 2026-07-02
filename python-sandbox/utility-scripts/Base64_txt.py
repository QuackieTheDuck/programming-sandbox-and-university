import base64
inp_string=input("Enter your base64 encoded string: ")
byte_string = inp_string.encode()
b64_string =base64.b64decode(byte_string)
print(b64_string)