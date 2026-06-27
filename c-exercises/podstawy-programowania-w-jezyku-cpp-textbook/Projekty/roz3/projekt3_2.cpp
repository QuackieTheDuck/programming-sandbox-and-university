#include <iostream>

using namespace std;

int main(){
    unsigned long a, b;
    cout<<" a = ", cin>>a, cout<<" b = ", cin>>b;
    do{
        if (a>b) a%=b;
            else b%=a;
    }while (a && b);
    cout<<" najwiejszy wspolny dzielnik: "<<a+b;
    cin.get(), cin.get();
    return 0;
}
/*program oblicza najwiejszy wspolny dzielnik na podstawie algorytmu
euklidesa w wariancie z dzieleniem*/