#include <iostream>

using namespace std;

int main(){
    double a, b, x;
    cout<<"     ax+b=0   "<<'\n';
    cout<<"a=   ", cin>>a, cout<<'\n';
    cout<<"b=   ", cin>>b, cout<<'\n';
    if (a!=0){
        x=-(b/a);
        cout<<"x=   "<<x<<'\n';
    }else if (b!=0){
        cout<<"rownanie sprzeczne"<<'\n';
    }else cout<<"rownanie tozsame"<<'\n';
    cin.get(), cin.get();
    return 0;
}
/*program rozwiazuje funkcje liniowa
generalnie to nie jest program 1:1 jak ten z ksiazki ale ten napisalem calkowicie sam na podstawie blokowego 
algorytmu z ksiazki*/