V=[]
while True:
    V.append(int(input("Podaj liczbe: ")))
    V.append(int(input("Podaj liczbe: ")))
    if V[-1]*V[-2]>1000:
        break
    else : V.append(V[-1]*V[-2])
print(V)