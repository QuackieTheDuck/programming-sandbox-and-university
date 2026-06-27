/* napisac program ktory odczyta liczby wygenerowane w zadaniu 1
posortuje je funkcja qsort i zapisze w plinku liczby2.txt
w pierwszej linii umiescic liczbe n, a kazda nastepna z 
posortowanych liczb umiescic w oddzielnej linii */

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int liczba_cyfr, kolumny;
    int wiersze=liczba_cyfr/kolumny;
    int *liczby= new int[kolumny, wiersze];
    fstream plik;
    plik.open("liczby.txt", ios::in);
    if(!plik)cout<<"Brak pliku!"<<endl; cin.get(), cin.get(); return 0;

    delete[] liczby;
    cin.get(), cin.get();
    return 0;
}