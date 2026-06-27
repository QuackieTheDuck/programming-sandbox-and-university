#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i=0; //mozna bezproblemowo przekazywac do funkcji, funkcje bezposrednio nie modyfikuja zmiennej a jedynie dzialaja na jej "kopii"
//potrzebny globalnie do okreslenia ilosci wczytanych danych uzywany we wszystkich funkcjach
int suma(int dane1[], int i){
	int ii=0;
	int suma=0;
	while(ii<i){
		suma=suma+dane1[ii];
		ii++;
	}
	return(suma);
}

float sredart(int suma, int i){
	float sredart=0;
	sredart=suma*1.0/i*1.0;
	return (sredart);
}

float sredgeo(int dane1[], int i){
	int ii=0;
	float sg=1;
	while(ii<i){
		sg*=dane1[ii];
		ii++;
	}
	sg=pow(sg,(1.0/ii));
	return(sg);
}


int main (){
	FILE* f;
	char dane0[1000];
	int dane1[1000];
	int n=0;
	if((f=fopen("dane.txt", "r"))==NULL){
		printf("Problem z otwarciem pliku!\n");
	}
	
	while(fscanf(f, "%s", &dane0)!=EOF){
		dane1[i]=atof(dane0);
		i++;
	}
	fclose(f);
	
	printf("wczytane liczby to:\n");
	for (n=0;n<i;n++){
		printf(" %d ", dane1[n]);
	}
	printf("\n Suma podanych liczb to %d",suma(dane1, i));
	printf("\n Srednia arytmetyczna podanych liczb to: %.3f ", sredart(suma(dane1, i), i));
	printf("\nSrednia geometryczna podanych liczb wynosi: %.3f", sredgeo(dane1, i));
	return 0;
}
