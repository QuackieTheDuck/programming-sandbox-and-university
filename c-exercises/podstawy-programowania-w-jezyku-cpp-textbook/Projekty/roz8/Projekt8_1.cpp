#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (){
    enum {n=10};
    unsigned int tablica[n],i;
    srand(time(0));
    for(i=0;i<n;++i) tablica[i]=rand()%100;
    for(i=0;i<n;++i)cout<<tablica[i]<<'\t';
    cout<<'\n';
    cin.get(),cin.get();
    return 0;
}