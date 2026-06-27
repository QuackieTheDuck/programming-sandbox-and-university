lista=list(range(0,201))
#print(lista)
ilosc=0
for pozycja in range (0,len(lista)-5):
    suma=sum(lista[pozycja:pozycja+6])
    if 800<suma<1000:
        ilosc+=1
        print(lista[pozycja:pozycja+6], ' = ',suma)
print(f'Jest {ilosc} ciagow ktore spelniaja zadany warunek.')