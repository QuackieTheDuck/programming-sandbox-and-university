#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int sortowanie_bombelkowe1 (int tablica[], int n){
	for (int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(tablica[j-1]>tablica[j]){
				int tmp;
				tablica[j-1]=tmp;
				tablica[j-1]=tablica[j];
				tablica[j]=tmp;
			}
		}
	}
}

int sortowanie_bombelkowe2 (int tablica[], int n){
	for (int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(tablica[j-1]<tablica[j]){
				int tmp;
				tablica[j-1]=tmp;
				tablica[j-1]=tablica[j];
				tablica[j]=tmp;
			}
		}
	}
}
*/

int sortowanie_bombelkowe1 (int tablica[], int n){
	for(int i=0; i<n;i++){
		for(int j=0; j<n; j++){
			if(tablica[j-1]>tablica[j]){
				int tmp;
				tmp=tablica[j-1];
				tablica[j-1]=tablica[j];
				tablica[j]=tmp;
			}
		}
	}
}

int sortowanie_bombelkowe2 (int tablica[], int n){
	for(int i=0; i<n;i++){
		for(int j=0; j<n; j++){
			if(tablica[j-1]<tablica[j]){
				int tmp;
				tmp=tablica[j];
				tablica[j]=tablica[j-1];
				tablica[j-1]=tmp;
			}
		}
	}
}

int main(){
	int n;
	printf("Podaj dowolna liczbe:");
	scanf("%d", &n);
	int tablica[n];
	for (int i=0; i<=n-1;i++){
		tablica[i]=(i+i*i);
	}
	for (int j=0; j<n;j++)printf("%d\n", tablica[j]);
	sortowanie_bombelkowe1(tablica, n);
	for (int i=0; i<n;i++){
		printf("%d ", tablica[i]);
	}
	printf("\n");
	sortowanie_bombelkowe2(tablica, n); //zmienna j powoduje siegniecie poza pamiec zarezerwowana dla tabicy, koniecznie usunac
	for (int i=0; i<n;i++){
		printf("%d ",tablica[i]);// nie umiem znalezc problemu
	}
	return 0;
}