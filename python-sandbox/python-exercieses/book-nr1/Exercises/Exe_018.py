x=int(input("Podaj liczbe: "))
suma=0
while x<1 or x>10:
    print(x*2)
    suma+=(x*2)
    x=int(input("Podaj liczbe: "))
print("Suma wyswietlonych elementow wynosi: ", suma)