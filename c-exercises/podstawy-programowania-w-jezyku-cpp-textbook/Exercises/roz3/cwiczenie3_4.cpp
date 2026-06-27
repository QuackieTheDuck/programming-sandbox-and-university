#include <iostream>

using namespace std;

int main(){
    unsigned long a, b=0, c=0;
    cout<<" Podaj liczbe a = ", cin>>a;
    do{
        while(a>0){
        b=b+(a%10);
        a/=10;
        }
        a=b;
        c=b;
        b=0;
    } while (c>10);
    cout<<c;
    cin.get(), cin.get();
    return 0;
}
/*program oblicza jednocyfrowa sume cyfr liczby*/