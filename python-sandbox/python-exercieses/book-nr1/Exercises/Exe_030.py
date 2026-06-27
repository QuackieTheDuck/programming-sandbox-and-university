ilosc_okrazen=int(input("Podaj liosc okrazen: "))
def waga_bloba(t):
    if t==1 or t==2:
        return(1)
    else: return(waga_bloba(t-1)+waga_bloba(t-2))
print('Waga BLOBA po ',ilosc_okrazen,' dniach: ',waga_bloba(ilosc_okrazen))
