#include<stdio.h>
#include<math.h>

int main(){
	int w;
	float a, h, r, p;
	printf("Wybierz pole jakiej figury chcialbys obliczyc:\n 1)kwadrat \n 2)trojkat \n 3)kolo\n");
	scanf("%d", &w);
	if (w==1){
		printf("Podaj dlugosc boku:\n");
		scanf("%f", &a);
		p=a*a;
		printf("Pole kwadratu wynosi %.3f jednostek kwadratowych", p);	
	}else if(w==2){
		printf("Podaj dlugosc podstawy:");
		scanf("%f", &a);
		printf("\n Podaj wysokosc trojkata:");
		scanf("%f", &h);
		p=(a*h)/2;
		printf("Pole trojkata wynosi %.3f jednostek kwadratowych", p);
	}else if(w==3){
		printf("Podaj promien kola:");
		scanf("%f", &r);
		p=M_PI*r*r;
		printf("Pole kola wynosi %.3f jednostek kwadratowych", p);
	}else printf("Wprowadziles niepoprawna liczbe\n");
	return 0;
}