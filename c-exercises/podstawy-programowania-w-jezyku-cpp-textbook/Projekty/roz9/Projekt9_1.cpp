//sortowanie bombelkowe

#include <iostream>
#include <cstdlib>

using namespace std;

const int N=10;
int tab[N];
void generator(int[], int);
void sort(int[], int);
void wydruk();

int main(){
    generator(tab,N);
    wydruk();
    sort(tab,N);
    wydruk();
    cin.get();
    return 0;
}

void generator(int A[], int n){
    srand(time(0));
    for(int i=0; i<N; ++i) A[i]=rand()%100;
}

void wydruk(){
    for(int i=0; i<N; ++i) cout<<tab[i]<<'\t';
    cout<<'\n';
}

void sort(int tab[], int N){
    for(int i=1; i<=N; ++i)
        for(int j=0; j<N-i; ++j) 
            if(tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);
}