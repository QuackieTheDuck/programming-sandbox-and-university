// program wyszukuje wzorca w tekscie wykorzystujac do tego algorytm naiwny Karpa-Rabina
// wada programu jest fakt ze traktuje on napis jako jednolityciagznakow a kazda spacja w napisie powoduje wystapienie bladu i niewykonanie wyszukiwania

#include <iostream>
#include <cstring>

using namespace std;

char* wzorzec(char* tekst, char* szukane){
if (!(tekst&&szukane)) return NULL;
char *tszukane, *ttekst;
for (char *t=tekst, *p=szukane; *t && *p; tszukane=(*p ? NULL :t), ++t)
    for(ttekst=t, p=szukane; (*ttekst==*p) && *p; ++p, ++ttekst);
return tszukane;
}

int main(){
  char szukane[20], tekst[40];
  cout<<"Napisz tekst: ",cin>>tekst;
  cout<<"Napisz wzorzec: ", cin>>szukane;
  char *tp=wzorzec(tekst,szukane);
  if (tp) cout<<tp-tekst; 
    else cout<<"brak";
  cin.get(),cin.get();
  return 0;
}