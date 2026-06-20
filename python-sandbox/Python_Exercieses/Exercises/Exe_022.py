x=[]
i=1
x.append(int(input("Podaj liczbe: ")))
while True:
    x.append(int(input("Podaj liczbe: ")))
    if x[i-1]==x[i]: break
    i+=1
print("Podano dwie identyczne liczby pod rzad.")