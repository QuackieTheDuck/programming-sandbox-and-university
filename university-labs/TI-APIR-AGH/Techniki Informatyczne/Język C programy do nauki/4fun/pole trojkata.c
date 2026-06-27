#include<stdio.h>

int main (){
	float a, h, p;
	printf("Podaj dlugosc podstawy trojkata:");
	scanf("%f", &a);
	printf("Podaj wysokosc trojkata:");
	scanf("%f", &h);
	p=(a*h)/2;
	printf("Pole trojkata wynosi: %.3f", p);
	return 0;
}