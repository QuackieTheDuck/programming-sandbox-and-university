#include <iostream>

using namespace std;

//funkcja do sprawdzania rzeczywistej islosci znakow w tavblicy znakowej
int lenght(char* tekst){
    int i=0;
    while(tekst[i])++i;
    return i;
}

//wypadaloby dorobic jakis program do tej funkcji  
int main(){
    int i=0;
    char napis[20], c;
    for(c='a';c<='k'; ++c)napis[c-'a']=c;
    napis[c-'a']=0;
    cout<<"Tekst to: "<<napis;
    cout<<'\t'<<"Dlugosc tekstu to: "<<lenght(napis);
    cin.get(),cin.get();
    return 0;
}