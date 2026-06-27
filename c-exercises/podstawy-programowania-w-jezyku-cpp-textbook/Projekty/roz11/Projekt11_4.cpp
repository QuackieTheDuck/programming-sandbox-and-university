#include <iostream>

using namespace std;

// przyklad funkcji dokonujacej porownania dwoch lancuchow znakowych

int textcompare(char* tekst1, char* tekst2){
    while (*tekst1==*tekst2 && *tekst1 && *tekst2) ++tekst1, ++tekst2;
    return (*tekst1>*tekst2)-(*tekst1<*tekst2); 
}
/*nalezy miec na uwadze ze tablice sa porownywane na odcinku tylu znakow ile ma najkrotsza tablica
jezeli 1 tablica ma 10 znakow a druga 20 to porownane zostanie tylko pierwszych 10 znakow 
co za tym idzie jezeli pierwsze 10 znakow bedzie identyczne a 11 znak 2 tablicy bedzie "dodatkowy"
to funkcja potraktuje te tablice jako identyczne
wniosek: funkcja dziala tylko jezeli mamy pewnosc ze obie tablice znakow sa identycznej dlugoscis */


int main (){
    char tekst1[20], tekst2[20];
    int j=0;
    for (char i='a'; i<'l'; ++i ) {
        tekst1[j]=i;
        ++j;
    }
    j=0;
    for (char i='a'; i<'l'; ++i ) {
        tekst2[j]=i;
        ++j;
    }
    tekst2[j]='p'; //dodanie jednego innego znaku w celu sprawdzenia instrukcji porownujacej
    if(textcompare(tekst1,tekst2)==0) cout<<"tablice znakow sa identyczne";
    else cout<<"tablice znakow sie roznia";
    cin.get();
    return 0;
}


//  string.h to biblioteka dodajaca mozliwosc dzialan i operacji na tablicach znakow jak na stringach//