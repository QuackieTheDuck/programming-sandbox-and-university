#include <iostream>
#include <cmath>
using namespace std;
double p;
int a, b;
int main(){
    cout<<"Podaj bok 'a' prostokata     a=  ", cin>>a, cout<<'\n';
    cout<<"Podaj bok 'b' prostokata     b=  ", cin>>b, cout<<'\n';
    p=sqrt((a*a)+(b*b));
    cout<<"Przekatna p= "<<p<<'\n';
    cin.get(), cin.get();
    return 0;
}
//program liczy dlugosc przekatnej prostokata o podanych bokach a i b