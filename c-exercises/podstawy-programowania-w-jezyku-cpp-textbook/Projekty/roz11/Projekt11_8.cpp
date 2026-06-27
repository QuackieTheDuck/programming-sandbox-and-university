// w tym programie calkowicie zastapiono proces wyszukiwania wzorca funkcja biblioteczna strstr

#include <iostream>
#include <cstring>

using namespace std;

int main (){
    char Tekst[100], Pszukane[10];
    int s;
    cout<<"Podaj napis: \n", cin>>Tekst;
    cout<<"Podaj wzorzec: \n", cin>>Pszukane;
    if (!(Tekst&&Pszukane)) return 0;
    char* tp=strstr(Tekst,Pszukane);
    if (tp) cout<<tp-Tekst;
        else cout<<"brak";
    cin.get(),cin.get();
    return 0;
}