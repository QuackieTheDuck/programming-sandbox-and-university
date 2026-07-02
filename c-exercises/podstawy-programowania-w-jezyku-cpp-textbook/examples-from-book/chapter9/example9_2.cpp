//sortowanie przez wybieranie

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

void sort(int a[], int N){
    int k;
    for(int i=0; i<N; ++i){
        k=i;
        for (int j=i; j<N; ++j) if(a[j]<a[k]) k=j;
        swap(a[i],a[k]);
    }
}