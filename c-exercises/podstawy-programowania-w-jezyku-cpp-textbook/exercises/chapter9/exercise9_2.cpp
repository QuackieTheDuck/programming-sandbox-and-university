//sortowanie przez wstawianie czyli insert sort

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

void sort(int a[], int n){
    int tmp, j;
    for(int i=1; i<n; i++){
        tmp=a[i];
        j=i-1;
        while(j>=0 && a[j]>tmp){
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=tmp;
    }
}