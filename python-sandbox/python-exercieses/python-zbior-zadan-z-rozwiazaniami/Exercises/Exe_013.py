wyswietlonych=0
pominietych=0
for i in range (1,121):
    if i%11==0 and i%5==0:
        pominietych+=1
    else:
        wyswietlonych+=1
        print(i)
print("Wyswietlonych: ",wyswietlonych," Pominietych: ", pominietych)