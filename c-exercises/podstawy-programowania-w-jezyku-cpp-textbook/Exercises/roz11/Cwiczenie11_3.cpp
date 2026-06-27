// szyfrowanie szyfrem cezara z wzrastajacym przesunięciem
// kazde przesuniecie po alfabecie jest o 1 wieksze od poprzedniego
// potrzeba dlugosci wyrazu, klucza itd

#include <iostream>
#include <cstring>

using namespace std;

void szyfrowanie(char* t,int n){
    int i=0;
    int ii=0;
    while (t[i]) ++i;
    for (int j=0; j<=i; ++j){
        if (t[j]+(n+ii)>=123) t[j]=(((t[j]+(n+ii))%123)+97);
        else t[j]+=(n+ii);
        ++ii;
    }
    }

    void odszyfrowywanie (char* t,int n){
        int i=0;
        int ii=0;
        while (t[i]) ++i;
        for (int j=0; j<=i; ++j){
            if (t[j]-(n+ii)<=96) t[j]=(123-(97-(t[j]-(n+ii))));
            else t[j]-=(n+ii);
            ++ii;
        }
        }

int main(){
int k;
string haslo;
cout<<"Podaj szyfrowany wyraz: ";
cin>>haslo;
l=haslo.length();
//cout<<l;      //sprawdzenie poprawnosci instrukcji lenght
char* tablica=haslo.data(); 
cout<<"Podaj klucz: ", cin>>k;
szyfrowanie(tablica, k);
system("cls");
cout<<"Zaszyfrowany wyraz to: "<<haslo<<endl;
cout<<"Podaj klucz: ", cin>>k;
system("cls");
odszyfrowywanie(tablica, k);
cout<<"Wyraz po odszyfrowaniu: "<<haslo<<endl;
cin.get(),cin.get();
return 0;
}