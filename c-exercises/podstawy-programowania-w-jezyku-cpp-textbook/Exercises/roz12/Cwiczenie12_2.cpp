/*napisac program ktory na podstawie 3 wprowadzonych lizb
mn, mx oraz n wygeneruje i zapisze w pliku tekstowym wyrazy.txt
n wyrazow skladajacych sie z losowych liter alfabetu angielskiego
kazdy wyraz zapisac w oddzielnej linii, maksymalna ilosc liter w wyrazie to mx
najniejsza to mn. zawezic dowolnosc ilosci liter w wyrazie do 
przedialu [1,30]*/

#define MAX 31
#define MIN 1
#include <iostream>
#include <fstream>
#include <cstdlib>
//#include <iomanip>

using namespace std;

int main(){
    int Mn, Mx, n;
    string wyraz;
    char c;
    srand(time(NULL));
    //cout<<MIN<<' '<<MAX;      // Przypominajka ze zmiennych preprocesorowych
    cout<<"Podaj ilosc generowanych wyrazow: ";
    cin>>n;
    cout<<"Podaj minimalna dlugosc wyrazu: ";
    cin>>Mn;
    if(Mn<1) Mn=1;
    cout<<"Podaj maksymalna dlugosc wyrazu: ";
    cin>>Mx;
    if(Mx>30) Mx=30;
    fstream wyrazy;
    wyrazy.open("wyrazy.txt", ios::out);
    for(int i=0; i<n; ++i){     //ilosc generowanych wyrazow
        int j=Mn+rand()%Mx;     //definiowanie dlugosci generowanych wyrazow
        for(int k=0; k<j; ++k ){//dlugosc generownych wyrazow
          c='a'+rand()%('a'-'z'+1);
          wyraz+=c;
        }
        wyrazy<<wyraz<<'\n';
        wyraz.clear();
    }
    //wyrazy<<'\n'<<Mn<<' '<<Mx;        //sprawdzajka
    wyrazy.close();
    cin.get(), cin.get();
    return 0;
}
//dziala prawie poprawnie czasami generuje za dlugie wyrazy