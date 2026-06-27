#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long tablica[21];
    const int N=21;
    int i;
    for (i=0; i<N; i++) tablica[i]=pow(2,i);
    for (i=0; i<N; i++) cout<<tablica[i]<<"\n";
    cin.get(),cin.get();
    return 0;
}