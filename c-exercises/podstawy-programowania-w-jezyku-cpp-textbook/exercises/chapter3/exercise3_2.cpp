#include <iostream>

using namespace std;

int main(){
    unsigned long a, b, c, d;
    cout<<" a = ", cin>>a;
    cout<<" b = ", cin>>b;
    c=a, d=b;
    while (a!=b){
        if (a>b) b+=d;
        else a+=c;
    }
    cout<<" NWW = "<<a;
    cin.get(), cin.get();
    return 0;
}
/* program oblicza namniejsza wspolna wielokrotnosc dwoch wprowadzonych liczb*/