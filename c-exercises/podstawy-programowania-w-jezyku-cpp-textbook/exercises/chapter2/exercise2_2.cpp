#include <iostream>
#include <cmath>

using namespace std;

int main(){
double a, b, c, p, P;
cout<<" Podaj dlugosc boku a=    ", cin>>a;
cout<<" Podak dlugosc boku b=   ", cin>>b;
cout<<" Podaj dlugosc boku c=   ", cin>>c;
if (a+b>c && b+c>a && c+a>b){
p=(a+b+c)/2;
P=sqrt(p*(p-a)*(p-b)*(p-c));
cout<<" Pole trojkata wynosi P= "<<P<<'\n'; 
} else cout<<" Z podanych odcinkow nie mozna skonstruowac trojkata"<<'\n';
cin.get(), cin.get();
return 0;
}
/*program sprawdza czy z danych odcinkow mozna skonstruowac trojkat
nastepnie oplicza jego pole*/