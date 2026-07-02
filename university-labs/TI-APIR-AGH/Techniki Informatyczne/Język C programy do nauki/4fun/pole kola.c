#include<stdio.h>
#include<math.h>

int main(){
	float r, p;
	printf("Podaj promien kola r:");
	scanf("%f", &r);
	p=M_PI*r*r;
	printf("Pole kola wynosi %f", p);
	return 0;
}