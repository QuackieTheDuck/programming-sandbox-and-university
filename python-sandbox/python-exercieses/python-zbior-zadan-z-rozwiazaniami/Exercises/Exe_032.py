x=[2,7,1,1,4,9,3,2,1,4,1,9,6,1,3,0,1,2,3,6,8,5,6,9,3,0,8,1,8,8,7,0,7,8,5,0,2,2,3,7,1,7,
2,4,7,7,5,9,0,7,7,9,2,2,2,7,0,0,5,4,6,3,9,3,5,1,0,0,9,2,9,2,8,5,0,8,5,7,0,9,6,4,9,7,8,
8,6,5,4,3,2,5,8,9,4,6,8,7,9,9]
# wyswietlic odlegosci miedzy 9 gdzie 99 => d=0 a 959 => d=1
#para=tmp=tmp1=0
#for i in range (0, len(x)):
#    if x[i]==9 and para==0:
#        tmp=i
#        para+=1
#    elif x[i]==9 and para==1:
#        tmp1=i
#        print(f"Odleglosc miedzy 9 a 9 to: {tmp1-tmp-1}")
#        para=0
#
# ten sposob ignorowal odleglosci pomiedzy parami, brak polowy odleglosci

odl= -1
for poz in range(len(x)):
    if x[poz]==9:
        if odl!=-1:
            print(odl,end=' ')
        odl=0
    elif odl!=-1:
        odl+=1