#include <iostream>
#include <ctype.h>

using namespace std;

int main (){
    char napis[20],c;
    for(c='a';c<='k'; ++c)napis[c-'a']=c;
    napis[c-'a']=0;
    if(isalpha(c>='A' && c<='Z' || c>='a' && c<='z'))cout<<"Jest charem";
    else cout<<"Nie jest charem";
    int toupper(int napis);
    cout<<'\n'<<napis;
    int tolower(int napis);
    cout<<'\n'<<napis;
    cin.get();
    return 0;
}
//program testowy do przetestowania operacji na charach