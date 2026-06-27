// implementacja algorytmicznego dodawania dlugich liczb calkowityc z uwzglednieniem znaku
//program pisany pstrukturalnie metoda bottom up

// ten pierdolony tasiemiec nie dziala chuj wie co tu sie odjebalo

#include <iostream>
#include <cstring>

using namespace std;

const int N=200;

// funkcja wprowadzajaca dlugie liczby do tablicy 
void wprowadzenie_liczby(int* t){
    int i, n, in;
    char temp[N+1];
    for (int i=0; i<=N; ++i) temp[i]=0;
    cin>>temp;
    i=0, n=strlen(temp), in=N-n+1;
    if (temp[0]=='-') t[0]=1, i=1;
    if (temp[0=='+']) t[0]=0, i=1;
    while (temp[1]>='0' && temp[i]<='9') t[i]=temp[i]-'0', ++i;
}

//funkcja wykonujaca dzialania na cyfrach dlugich liczb wraz z uwglednieniem pozyczek i naddatkow
void dodawanie_cyfry (int s1, int s2, int& w, int& p){
    int temp=s1+s2+p;
    w=temp%10; p=temp/10;
}
void odejmowanie_cyfry(int o1, int o2, int& w, int& p){
    int temp=o1=-p;
    if(temp<o2)temp+=10, p=1;
        else p=0;
    w=temp-o2;
}

//funkcje dzialajace na liczbach (funkcje wyzsego poziomu bo wielokrotnie wywoluja funkcje dodawania/odejmowania cyfr)
void dodawanie_liczby (int* s1, int* s2, int* w){
    int p=0;
    for (int i=N; i>0; --i) odejmowanie_cyfry(s1[i],s2[i],w[i],p);    
}
void odejmowanie_liczby(int* o1, int* o2, int* w){
    int p=0;
    for(int i=N; i>0; --i) odejmowanie_cyfry(o1[i],o2[i],w[i], p);
}

//funkcja porownujaca wprowadzone liczby tak aby wynik odejmowania byl wynikiem odejmowania liczby wiekszej od mi=niejszej i nie byl ujemny
int porownanie(int* n1, int* n2){
    int i=1;
    while (n1[i]==n2[i]) ++i;
    return n1[i]>n2[i];
}

// funkcja wykonujaca dzialanie na wprowadzonych liczbach
void dzialanie(int* n1, int* n2, int*w){
    if(!(n1[0]^n2[0])) dodawanie_liczby(n1,n2,w), w[0]=n1[0];
    else if (porownanie (n1, n2)) odejmowanie_liczby(n1,n2,w), w[0]=n1[0];
    else odejmowanie_liczby(n2,n1,w), w[0]=n2[0];
}

// funkcja wyprowadzajaca wynik wszystkich poprzednich dzialan
void wyprowadzenie_wyniku(int* wynik){
    int i, j=0;
    char temp[N+1];
    for (i=0; i<N+1; ++i) temp[i]=0;
    if (wynik[i=0]==1) temp[0]='-', ++i, ++j;
    while (!wynik[i])++i;
    while (i<=N) temp[j]='0'+wynik[i], ++i, ++j;
    if (!temp[0] || temp[0]=='-' &&!temp[1]) cout<<'0';
    else cout<<temp;
}

// w koncu do cholery funkcja glowna
int main(){
    int s1[N+1], s2[N+1], wynik[N+1];
    wprowadzenie_liczby(s1);
    wprowadzenie_liczby(s2);
    dzialanie(s1,s2,wynik);
    wyprowadzenie_wyniku(wynik);
    cin.get(), cin.get();
    return 0;
}