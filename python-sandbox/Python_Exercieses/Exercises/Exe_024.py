x=[]
while True:
    y=input("Podaj znak: ")[0]
    if y[0] in "aeiou":    #gotowe
        x.insert(0,y)
    elif y[0] in "bcdfghjklmnprstwz": #gotowe
        x.append(y)
    elif y[0] in "#":      #gotowe
        x.pop()
    elif y[0] in "*":      #gotowe
        x.pop(0)
    elif y[0] in "!":   # gotowe
        break
print(x)