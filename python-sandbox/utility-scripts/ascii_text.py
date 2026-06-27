ascii=input("Enter space separated printable ASCII values: ").split()
for i in ascii:
    print(chr(int(i)),end="")
