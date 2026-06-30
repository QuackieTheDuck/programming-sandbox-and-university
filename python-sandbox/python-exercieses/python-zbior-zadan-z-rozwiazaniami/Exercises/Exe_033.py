x=[2,7,1,1,4,9,3,2,1,4,1,9,6,1,3,0,1,2,3,6,8,5,6,9,3,0,8,1,8,8,7,0,7,8,5,0,2,2,3,7,1,7,
2,4,7,7,5,9,0,7,7,9,2,2,2,7,0,0,5,4,6,3,9,3,5,1,0,0,9,2,9,2,8,5,0,8,5,7,0,9,6,4,9,7,8,
8,6,5,4,3,2,5,8,9,4,6,8,7,9,9]
#ile razy sasiednie liczby byly identyczne
#ile razy suma dwoch sasiednich liczb wynosila 10
suma=sasiady=0
for i in range(len(x)-1):
    if x[i]==x[i+1]:
        sasiady+=1
    if (x[i]+x[i+1])==10:
        suma+=1
print(f"Dwie sasiednie liczby byly identyczne: {sasiady} razy")
print(f"Dwie sasiednie liczby dawaly sumarycznie 10: {suma} razy")