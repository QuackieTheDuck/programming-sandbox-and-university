#include <iostream>

using namespace std;

int main(){
    unsigned long a, b=2;
    cout<<" Podaj liczbe a = ", cin>>a;
    cout<<" Czynniki pierwsze liczby a: "<<'\n';
    while (a!=0){
        if(a%b==0){
        cout<<" "<<b;
        a/=b;
        } else b++;
    }
    cin.get(), cin.get();
    return 0;
}
// program rozklada liczbe na czynniki pierwsze