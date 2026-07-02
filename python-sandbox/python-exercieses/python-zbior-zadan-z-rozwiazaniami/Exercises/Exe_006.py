liczby=[]
i=parzyste=nieparzyste=0
while i<5:
    liczby.append(input("Podaj liczbe:"))
    if int(liczby[i])%2==0:
        parzyste+=1
    else: nieparzyste+=1
    i+=1
print("Liczb parzystych bylo: ", parzyste, " Nieparzystych bylo: ", nieparzyste)
#print(liczby)