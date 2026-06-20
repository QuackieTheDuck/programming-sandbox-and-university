lista1=[0,1,2,3,4,5,6,7,8,9]
lista2=[]
for i in range (0, len(lista1)):
    if lista1[i]%2==0:
        lista2.append(lista1[i])
for i in range (0, len(lista1)):
    if lista1[i]%2==1:
        lista2.append(lista1[i])
print(lista1)
print(lista2)