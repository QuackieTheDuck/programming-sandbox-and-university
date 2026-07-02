from copy import copy
v1=[1,3,5,7,9]
v2=[1,4,7,11,15]
v3=[1,2,3,4,5,6,7,8,9,20]
y1=[]
y2=[]
y3=[]
# Podpunkt 1
for i in v1:
    for j in v2:
        if i==j and i not in y1:
            y1.append(i)
print(y1)
# Podpunkt 2
kopia=copy(v1)
for i in v2:
    if i not in kopia:
        kopia.append(i)
for i in v3:
    if i not in kopia:
        y2.append(i)
print(y2)
kopia2=copy(v2)
for i in v3:
    if i not in y3:
        y3.append(i)
for i in v2:
    if i not in y3:
        y3.append(i)
for i in v1:
    if i not in y3:
        y3.append(i)
print(y3)