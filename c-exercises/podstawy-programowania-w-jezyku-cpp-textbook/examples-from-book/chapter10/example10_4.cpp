// program definiuje tablice dynamiczna a nastepnie korzystajac z funkcji qsort sortuje jej elementy

#include <iostream>
#include <cstdlib>
#include<time.h>

using namespace std;

int *tab, n;
void generator(int *, int );
void wydruk();
int comp(const void *, const void *);

int main (){
    cout<<"n=",cin>>n,cout<<'\n', tab=new int[n];
    generator(tab,n);
    wydruk();
    qsort(tab, n, sizeof(tab[0]), comp);
    wydruk();
    delete[]tab;
    cin.get(),cin.get();
    return 0;
}

void wydruk(){
    for (int i=0; i<n; ++i) cout<<tab[i]<<'\t';
    cout<<'\n';
}

void generator(int *A, int n)
{
    srand(time(0));
    for (int i=0; i<n; ++i) A[i]=rand()%10000;
}

int comp(const void *a, const void *b)
{
    return((*(int*)b<*(int*)a)-(*(int*)b>*(int*)a));
}