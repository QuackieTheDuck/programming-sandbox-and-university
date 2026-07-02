//program losuje n liczb od 0 do 10
//a nastepnie liczby ile razy wylosowano kazda z liczb

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void generator(int *, int);
void zliczanie(int *,int *, int);
void wydrukuj(int *, int);


int main (){
    int n, *tab, liczby[10]={0};
    cout<<"n=",cin>>n,cout<<'\n';
    tab=new int[n];
    generator(tab,n);
    wydrukuj(tab,n);
    cout<<'\n';
    zliczanie(tab,liczby,n);
    //wydrukuj(liczby,10);  //sprawdzenie poprawnosci generowania tablicy do zliczania
    cout<<"Jedynek jest: "<<liczby[1]<<'\n'<<"Dwojek jest "<<liczby[2]<<'\n'<<"Trojek jest "<<liczby[3]<<'\n'<<"Czworek jest "<<liczby[4]<<'\n'<<"Piatek jest "<<liczby[5]<<'\n'<<"Szostek jest "<<liczby[6]<<'\n'<<"Siodemek jest "<<liczby[7]<<'\n'<<"Osemek jest "<<liczby[8]<<'\n'<<"Dziewiatek jest "<<liczby[9]<<'\n'<<"Dziesiatek jest "<<liczby[0]<<'\n';
    cin.get(),cin.get();
    return 0;
}

void generator(int *tab, int n){
    srand(time(0));
    for(int i=0; i<n; ++i){
        tab[i]=rand()%10;
    }
}

void zliczanie(int *tab,int *liczby,int n){
    for(int i=0; i<n; ++i){
        for(int j=0; j<10;++j){
            if(tab[i]==j)++liczby[j];
        }
    }
}

void wydrukuj(int *tab, int n){
    for(int i=0; i<n; ++i){
        cout<<tab[i]<<'\t';
    }
}