/*program ma za zadanie wygerowac plikt tekstowy liczby.txt
zapisac w tym pliku n losowych liczb z przedzialu[-m,m]
w pierwszej linii ma byc liczba n, a w nastepnych po k
wylosowanych liczb z przedzialu. Liczby sformatowac do ronych kolumn
k,n,m wprowadzic z klawiatury*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){
    int k,m,n, liczba,neg;
    srand(time(NULL));
    cout<<"Podaj ile losowych liczb chcesz wygenerowac: ";
    cin>>n;
    cout<<"Podaj zakres losownych liczb: ";
    cin>>m;
    cout<<"Podaj ilosc kolumn: ";
    cin>>k;
    fstream liczby;
    liczby.open("liczby.txt", ios::out);
    liczby<<n;
    for(int i=0; i<n; ++i){     //petla od ilosci wylosowanych liczb
        if(!(i%k)) liczby<<'\n';      //podział na kolumny
        liczba=rand()%(m+1);        //losowanie liczb w linijce 29 losowanie znaku
        neg=rand()%2;
        if(neg) liczba*=(-1);
        liczby<<setw(7)<<liczba; 
    }
    liczby.close();
    return 0;
}