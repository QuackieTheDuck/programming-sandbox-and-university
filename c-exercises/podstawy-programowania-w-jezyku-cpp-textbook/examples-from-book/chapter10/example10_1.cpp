// przykadowy program pokazujacy dzialanie wskaznikow
// & operator adresacji czyli pobranie adresu

#include <iostream>

using namespace std;

double i,j;

int main (){
    int i,j;
    cout<<&i<<' '<<&j<<' '<<&j-&i<<'\n';
    cout<<&::i<<' '<<&::j<<' '<<&::j-&::i<<'\n';
    cin.get();
    return 0;
}