#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* fp;
	char tekst[12];
	float dane[12];
	int i=0;
	
	if ((fp=fopen("kwadratowe.txt", "r"))==NULL){
		printf("Problem z otwarciem pliku! \n");
		exit(1);
	};
	
	while ((fscanf(fp, "%s",&tekst))!=EOF){
		printf("%s\n", tekst);
		dane[i]=atof(tekst);
		i++;
	};
	
	fclose(fp);
	return 0;
}