//sortowanie babelkowe dwukierunkowe czyli shaker sort

#include <iostream>
#include <cstdlib>
#include <time.h>

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
    cin.get(),cin.get();
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

void sort(int a[], int N){        
    int top=N-1, bottom=0;
    bool zamiana=true;
   while(zamiana){
    zamiana=false;
        for(int j=bottom; j<top; ++j){
            if(tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);
            zamiana=true;
        }
        top--;
        for(int j=top; j>bottom; --j){
            if(tab[j]<tab[j-1])swap(tab[j],tab[j-1]);
            zamiana=true;
        }
        bottom++;
    };
}