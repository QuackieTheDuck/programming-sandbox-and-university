#include <iostream>

using namespace std;

int main(){
    char osoba[40], *os=osoba;
    cin.get(osoba,39);
    cout<<osoba<<'\n';
    do cout<<(int)*os<<' ';
    while (*(os++));
    cin.get(), cin.get();
    return 0;
}
// zastosowanie przeciazonej funkcji skladowej get
//plik zczytuje maksymalnie 40 znakow do 40 elementowej tablicy
// nastepnie wypisuje kody poszczegolnych znakow