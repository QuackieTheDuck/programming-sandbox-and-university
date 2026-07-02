import re
podz_6=[]
z_7=[]
j=k=0
for i in range (0,1000):
    if i%6==0:
        podz_6.append(i)
        j+=1
        if re.search('7',str(i)):
            z_7.append(i)
            k+=1
print("Podzielne przez 6: ",podz_6," lacznie: ",j)
print("Podzielne przez 6 zawierajace 7: ", z_7, " lacznie: ",k)
