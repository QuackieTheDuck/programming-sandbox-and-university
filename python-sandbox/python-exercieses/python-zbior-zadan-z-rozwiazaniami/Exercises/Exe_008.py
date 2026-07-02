x=float(input("Podaj liczbe: "))
y=float(input("Podaj druga liczbe: "))
znak=input("Podaj znak dzialania jakie chcesz wykonac")
match znak:
    case '+':
        if x+y==y+x:
            print(x, '+', y, '=',y,'+',x,'=',x+y)
        else:
            print(x, '+', y, '=',x+y,'\n',y,'+',x,'=',y+x)
    case '-':
        if x-y==y-x:
            print(x, '-', y, '=',y,'-',x,'=',x-y)
        else:
            print(x, '-', y, '=',x-y,'\n',y,'-',x,'=',y-x)
    case '*':
        if x*y==y*x:
            print(x, '*', y, '=',y,'*',x,'=',x*y)
        else:
            print(x, '*', y, '=',x*y,'\n',y,'*',x,'=',y*x)
    case '/':
        if x==0:
            print(x, '/', y, '=',x/y," y/x niewykonywalne")
        elif y==0:
            print("x/y miewykonywalne ",y,'/',x,'=',y/x)
        elif x/y==y/x:
            print(x, '/', y, '=',y,'/',x,'=',x/y)
        else:
            print(x, '/', y, '=',x/y,'\n',y,'/',x,'=',y/x)