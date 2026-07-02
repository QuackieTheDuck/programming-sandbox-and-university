// program sluzy do sprawdzania wprowadzony wyraz jest palindromem (w sensie kajak albo kultowy kamil slimak)

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char T[20];
    bool pal;
    cout<<"Prosze podac wyraz: \n";
    cin>>T;
    for(int i=0, j=strlen(T)-1; i<j; ++i, --j) if(!(pal=(T[i]==T[j]))) break;
    if(pal)cout<<"PALINDROM!";
    else cout<<"nie palindrom";
    /*pal=T[0]==T[strlen(T)-1];
    cout<<pal;*/ // wyprowadzono wartosc pal w celu zrozumienia logiki warunku algorytmu sprawdzajacego
    cin.get(),cin.get();
    return 0;
}