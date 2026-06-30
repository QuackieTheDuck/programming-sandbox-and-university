#include <iostream>

using namespace std;

int main(){
    unsigned long a, b;
    cout<<" a = ", cin>>a, cout<<" b = ", cin>>b;
    while (a!=b) if (a>b) a-=b;
    else b-=a;
    cout<<" najwiejszy wspolny dzielnik: "<<a;
    cin.get(), cin.get();
    return 0;
}
/*program szuka najwiejszego wspolnego dzielnika poprzez algorytm euklidesa*/