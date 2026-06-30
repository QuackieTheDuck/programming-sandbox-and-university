v=[1,2,4,3,6,8,7,7,8,3,4,5,6,7,1,3,9,1,0,4,2,3,6,9]
var_1=var_2=var_3=var_4=var_5=var_6=var_7=var_8=var_9=0
print("Wszystkie trojelementowe rosnace ciagi liczbowe: ")
for i in range (0,22):
    if v[i]<v[i+1]<v[i+2]:
        print(v[i],v[i+1],v[i+2])
# Tuatj szukanie najdluzszego rosnacego ciagu
print("Najdluzszy rosnacy ciag liczbowy: ")



# Tutaj szukanie ile razy dana liczba wystapila w liscie
print("Licznik wystapien cyfr: ")
for i in range (0,22):
    match v[i]:
        case 1:
            var_1+=1
        case 2:
            var_2+=1
        case 3:
            var_3+=1
        case 4:
            var_4+=1
        case 5:
            var_5+=1
        case 6:
            var_6+=1
        case 7:
            var_7+=1
        case 8:
            var_8+=1
        case 9:
            var_9+=1
print("Liczba 1: ",var_1," Liczba 2: ",var_2," Liczba 3: ",var_3," Liczba 4: ",var_4," Liczba 5: ",var_5,)
print("Liczba 6: ",var_6," Liczba 7: ",var_7," Liczba 8: ",var_8," Liczba 9: ",var_9,)