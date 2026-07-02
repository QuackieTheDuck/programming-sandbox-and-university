// program symuluje n rzutow dwoma szesciennymi kostkami
// oblicza sume oczek z tych dwoch kostek a nastepnie
// wyswietla czestosc poszczegolnych sum

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void losowanie(int *, int);
void zliczanie(int *,int *, int);
void wydrukuj(int *, int);

int main(){
    int *tab, sumy[11]={0},n;
    cout<<"n=",cin>>n;
    tab=new int[n];
    losowanie(tab,n);
    wydrukuj(tab,n);
    zliczanie(tab,sumy,n);
    //wydrukuj(sumy,11); //debugowanie
   
   //trzeba to jakos skrocicz 
    for (int i=0; i<11; ++i){
     cout<<"Suma oczek rowna ";
        if (i==1) cout<<7;
     else if (i==0)cout<<12;
     else if (i<=6) cout<<i;
     else cout<<i+1;
        cout<<" wypadla "<<sumy[i]<<" razy ";
        cout<<'\t'<<"co stanowi "<<sumy[i]*100.0/n<<"% wszystkich rzutow\n" ;
    }
    //sie udalo skrocic na dole stary tasiemiec
    //cout<<"Dwojek jest     "<<sumy[2]<<'\t'<<"Rzuty te stanowily:"<<sumy[2]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Trojek jest     "<<sumy[3]<<'\t'<<"Rzuty te stanowily:"<<sumy[3]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Czworek jest    "<<sumy[4]<<'\t'<<"Rzuty te stanowily:"<<sumy[4]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Piatek jest     "<<sumy[5]<<'\t'<<"Rzuty te stanowily:"<<sumy[5]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Szostek jest    "<<sumy[6]<<'\t'<<"Rzuty te stanowily:"<<sumy[6]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Siodemek jest   "<<sumy[1]<<'\t'<<"Rzuty te stanowily:"<<sumy[1]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Osemek jest     "<<sumy[7]<<'\t'<<"Rzuty te stanowily:"<<sumy[7]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Dziewiatek jest "<<sumy[8]<<'\t'<<"Rzuty te stanowily:"<<sumy[8]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Dziesiatek jest "<<sumy[9]<<'\t'<<"Rzuty te stanowily:"<<sumy[9]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Jedenastek jest "<<sumy[10]<<'\t'<<"Rzuty te stanowily:"<<sumy[10]*100.0/n<<"% wszystkich rzutow"<<'\n'<<"Dwunastek jest  "<<sumy[0]<<'\t'<<"Rzuty te stanowily:"<<sumy[0]*100.0/n<<"% wszystkich rzutow"<<'\n';
    cin.get(),cin.get();
    return 0;
}

void losowanie(int *tab, int n){
    srand(time(0));
    int a,b;
    for(int i=0; i<n;++i){
        a=rand()%6;
        b=rand()%6;
        tab[i]=a+b;
    }
}

void wydrukuj(int tab[],int n){
    for(int i=0; i<n; ++i){
        cout<<tab[i]<<'\t';
    }
    cout<<'\n';
}

void zliczanie(int tab[], int sumy[], int n){
    for(int i=0; i<n; ++i){
        for(int j=0; j<11; ++j)if(j==tab[i])sumy[j]++;
    }
}