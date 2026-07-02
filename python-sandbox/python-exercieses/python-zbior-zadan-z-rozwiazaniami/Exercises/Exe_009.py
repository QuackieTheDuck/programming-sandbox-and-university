x=int(input("Podaj liczbe: "))
if  x < 0:
    x-=1
if x > 0:
    x+=1
if x%2==0:
    print("Liczba jest parzysta.")
else:
    print("Liczba jest nieparzysta.")