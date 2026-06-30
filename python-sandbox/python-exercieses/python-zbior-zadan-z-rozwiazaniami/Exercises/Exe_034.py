suma=ord_znak=0
znak=chr
while suma<550:
    znak=input(("Podaj znak:"))
    print(type(znak))
    if znak in ('a','z') or znak in ('A','Z') or int(znak) in range (0,9):
        ord_znak=ord(znak)
        print(ord_znak)
        suma+=ord_znak
    else: print("Nieprawidlowy znak, popraw.")