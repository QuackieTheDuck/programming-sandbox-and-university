//sortowanie szybkie czyli quick sort

#include <iostream>
#include <cstdlib>

using namespace std;

const int N=10;
int tab[N];
void generator(int[], int);
void quick_sort(int[],int, int);
void wydruk();

int main(){
    generator(tab,N);
    wydruk();
    quick_sort(tab,0,N-1);
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

void quick_sort(int tab[],int lewy, int prawy){
    int i = lewy - 1, j = prawy + 1, 
	pivot = tab[(lewy+prawy)/2];
	while(1)
	{
		while(pivot>tab[++i]);
		while(pivot<tab[--j]);
		if( i <= j)
			swap(tab[i],tab[j]);
		else
			break;
	}
	if(j > lewy) quick_sort(tab, lewy, j);
	if(i < prawy) quick_sort(tab, i, prawy);
} 