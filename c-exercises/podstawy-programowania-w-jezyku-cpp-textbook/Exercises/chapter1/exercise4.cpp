#include <iostream>
#include <cmath>

using namespace std;

double a, k1, k2, k3, P;

int main(){
    cout<<"Podaj dlugosc boku a=    ", cin>>a, cout<<'\n';
    cout<<"Podaj wielkosc kata przyleglego do boku a: k1=  ", cin>>k1, cout<<'\n';
    cout<<"Podaj wielkosc kata przyleglego do boku a: k2=  ", cin>>k2, cout<<'\n';
    k3=180-(k1+k2);
    k1=(k1*2*M_PI)/360;
    k2=(k2*2*M_PI)/360;
    k3=(k3*2*M_PI)/360;
    P=(a*a*sin(k1)*sin(k2))/(2*sin(k3));
    cout<<"Pole trojkata o podanych wymiarach wynosi P= "<<P<<'\n';
    cin.get(), cin.get();
    return 0;
}
//program liczy pole dowolnego trojkata o boku a i katach przyleglych do niego k1 oraz k2