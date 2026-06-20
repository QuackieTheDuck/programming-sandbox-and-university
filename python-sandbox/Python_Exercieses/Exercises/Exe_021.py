# because i messed up questions i enetered numbers into list not into variables
x=[]
ciag=0
for i in range (0,5):
    x.append(int(input("Podaj liczbe: ")))
for i in range(1,5):
    if x[i-1]>x[i]:
        ciag+=1
if ciag==0:
    print("Liczby tworza ciag rosnacy.")
else: print("Liczby nie tworza ciagu rosnacego.")