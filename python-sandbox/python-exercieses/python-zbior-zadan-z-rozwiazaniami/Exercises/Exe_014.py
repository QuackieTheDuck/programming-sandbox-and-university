wzor=[3,1,2,1]
wynik=[]
for i in range (0,100):
    wynik.append(wzor[i%4])
print("Elementow jest: ",len(wynik))
print(wynik)