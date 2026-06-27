#include <stdio.h>
#include <stdlib.h>

int szukajmin (int dane[], int i){
	int min=dane[0];
	for(int j=0; j<i; j++){
		if(dane[j]<dane[0])min=dane[j];
	}
	return min;
}

int szukajmax (int dane[], int i){
	int max=dane[0];
	for(int j=0; j<i; j++){
		if(dane[j]>dane[0])max=dane[j];
	}
	return max;
}

int main (){
	FILE* f;
	int i=0;
	char tekst[100];
	int dane[100];
	if((f=fopen("dane.txt", "r"))==NULL){
		printf("Problem z otwarciem pliku.");
		exit(1);
	}
	while(fscanf(f, "%s" , &tekst)!=EOF){
		dane[i]=atof(tekst);
		i++;
	}
	fclose(f);
	printf("Min: %d", szukajmin(dane, i));
	printf("Max; %d", szukajmax(dane, i));
	return 0;
}