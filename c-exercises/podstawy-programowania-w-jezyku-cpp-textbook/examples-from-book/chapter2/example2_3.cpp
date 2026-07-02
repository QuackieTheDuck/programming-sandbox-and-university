#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a=0.3, b=0.1, c;
    double epsilon=1E-9;            //tolerancja wyniku koniezna ze wzgledu na sposob przeksztalcania ulamkow przez program
    c=a-b-b-b;
    if (abs(c)<epsilon) cout<<"jest rowne zero";        //abs to funkcja zwracajaca wartosc bezwzgledna
        else cout<<"nie jest rowne zero";
    cout<<'\n'<<c<<'\n';
    cin.get();
    return 0;
}
/*poprawiona wersja programu, poprzedni dzialal blednie ze wzgledu na blad rachunkowy programu. program przeksztalca ulamki dziesietne na ulamki dwojkowe z czego wynika brak dokladnosci w wykonywanym obliczeniu.*/