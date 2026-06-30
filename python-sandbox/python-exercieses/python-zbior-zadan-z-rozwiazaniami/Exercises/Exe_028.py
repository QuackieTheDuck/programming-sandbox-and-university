v=[]
v2=[]
V=0
V2=0
tmp=0
while len(v)<5:
    tmp=int(input(print("Podaj liczbe 0-9: ")))
    if tmp in range(0,10):
        v.append(tmp)
        #print(v)

#dodac usuwanie zer z przodu

for i in range(0,len(v)):
    V+=v[i]*10**(len(v)-i-1)
print(V)

#dodac odwrotnosc
v2=list(reversed(v))
for i in range(0,len(v2)):
    V2+=v2[i]*10**(len(v2)-i-1)
print(V2)

#usunac zera z przodu