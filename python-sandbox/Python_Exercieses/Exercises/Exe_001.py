a = b = c = -1
while a<0 or b<0 or c<0 :
    a=int(input("Podaj liczbe a: "))
    b=int(input("Podaj liczbe b: "))
    c=int(input("Podaj liczbe c: "))
if a > b :
    maks = a
else: maks =b
if c>maks:
    maks=c
suma = a+b+c-maks
i=0
while i<maks:
    print(maks)
    i+=1