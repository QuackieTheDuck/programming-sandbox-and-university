#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* f;
	char dane0[1000];
	long dane1[1000];
	int n=0, i=0;
	
	
	if((f=fopen("dane.txt", "r"))==NULL){
		printf("Problem z otwarciem pliku!\n");
	} 
	
	
	while(fscanf(f, "%s", &dane0)!=EOF){
		dane1[i]=atof(dane0);
		i++;
	}
	fclose(f);
	
	//printf("%d",i); /*sprawdzenie czy i podaje ilosc zapisanych miejsc w tablicy*/
	long min=dane1[0], max=dane1[0];
	for(n=0;n<i;n++){
		if(dane1[n]<min)min=dane1[n];
		if(dane1[n]>max)max=dane1[n];
	}
	printf("Min to %ld Max to %ld", min, max);
	return 0;
}