#include<iostream>
#include<cmath>
using namespace std;
int a;
double p;
int main(){
    cout<<" Podaj bok kwadratu:     a= ",cin>>a, cout<<'\n';
    p=a*double(sqrt(2.0));
    cout<<" Przekatna p= "<<p;
    cin.get(),cin.get();
    return 0;
}
// program liczy dlugosc przekatnej kwadratu