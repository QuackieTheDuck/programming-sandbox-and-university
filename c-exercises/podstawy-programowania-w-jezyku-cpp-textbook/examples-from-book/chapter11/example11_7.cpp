// program do wyszukiwania wzorca w tekscie przy uzyciu funkcji bibliotecznych z cstring
// program posiada takie sme ogranizenia jak Program11_6

#include <iostream>
#include <cstring>

using namespace std;

int wzorzec (char* Tekst, char* Pszukane){
int n=strlen(Tekst), m=strlen(Pszukane), s;
for( s=0; s<=n-m; s++) if (!(strncmp(Tekst+s, Pszukane, m))) break;
if(s<=n-m) return s;
return -1;
}

int main (){
    char Tekst[100], Pszukane[10];
    cout<<"Podaj tekst: \n", cin>>Tekst;
    cout<<"Podaj wzorzec: \n", cin>>Pszukane;
    if (!(Tekst&&Pszukane)) return 0;
    cout<<wzorzec(Tekst,Pszukane)<<endl;
    cin.get(),cin.get();
    return 0;
}