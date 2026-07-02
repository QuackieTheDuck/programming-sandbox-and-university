// program szyfruje wyraz szyfrem cezara
// z wad nie przewidziano wprowadzenia malych i duzych liter 
// szyfrowanie nie dziala poprawnie dla duzych liter
// w celu poprawienia dzialania programu dodano wymuszenie malych liter

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

//szyfrowanie tablicy znakow
void szyfrowanie(char* t,int n){
int i=0;
while (t[i]) ++i;
for (int j=0; j<=i; ++j){
    if (t[j]+n>=123) t[j]=(((t[j]+n)%123)+97);
    else t[j]+=n;
}
}

//odszyfrowywanie tablicy znakow
void odszyfrowywanie (char* t,int n){
int i=0;
while (t[i]) ++i;
for (int j=0; j<=i; ++j){
    if (t[j]-n<=96) t[j]=(123-(97-(t[j]-n)));
    else t[j]-=n;
}
}

int main(){
int n, k;
string haslo;
cout<<"Podaj szyfrowany wyraz: ";
cin>>haslo;
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