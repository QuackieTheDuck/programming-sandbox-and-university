#include <iostream>
#include <cmath>
using namespace std;

double b, a, k, kr, P;

int main(){
cout<<"Podaj dlugosc boku a=    ", cin>>a, cout<<'\n';
cout<<"Podaj kat przylegajacy do boku a, k= ", cin>>k, cout<<'\n';
kr=(((90-k)*2*M_PI)/360);
b=a/tan(kr);
P=(a*b)/2;
cout<<"Pole trojkata wynosi P=  "<<P<<'\n';
cin.get(),cin.get();
return 0;
}
//program liczy pole trojkata prostokatnego o podanym boku a oraz kacie przyleglym do tego boku