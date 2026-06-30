#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    const int N=20;
    unsigned int tablica[20], i, suma=0;
    double srednia;
    srand(time(0));
    for (i=0; i<N; i++) tablica[i]=0;
    for (i=0; i<N; i++) tablica[i]=rand()%100;
    for (i=0; i<N; i++) suma+=tablica[i];
    srednia=(double)suma/N;
    for (i=0; i<N; i++) cout<<tablica[i]<<"  ";
    cout<<"\nSrednia wartosc liczb w tablicy wynosi: "<<srednia;
    cin.get(),cin.get();
    return 0;
}