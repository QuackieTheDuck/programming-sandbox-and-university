// uzyskiwanie dostepu do zawartosci tablicy przy uzyciu wskaznikow

#include <iostream>

using namespace std;

int main(){
    int tab[6]={9,8,7,6};
    cout<<tab<<' '<<&tab[0]<<' '<<'\n';
    int *temp=tab;
    for(int i=0; i<6; ++i)cout<<*temp++<<' ';
    cin.get();
    return 0;
}