#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Punkt {
	int x;
	int y;
};

int main(){
	long long x, y, xy;
	struct Punkt Punkt1;
	struct Punkt Punkt2;
	printf("Podaj wspolrzedna x P1: ");
	scanf("%d",&Punkt1.x );
	printf("Podaj wspolrzedna y P1: ");
	scanf("%d",&Punkt1.y );
	printf("Podaj wspolrzedna x P2: ");
	scanf("%d",&Punkt2.x );
	printf("Podaj wspolrzedna y P2: ");
	scanf("%d",&Punkt2.y );
/*	printf("%d\n", Punkt1.x);
	printf("%d\n", Punkt1.y);
	printf("%d\n", Punkt2.x);
	printf("%d\n", Punkt2.y);*/
	x=pow(Punkt2.x-Punkt1.x,2);
	//printf("%lld", x);
	y=pow(Punkt2.y-Punkt1.y,2);
	//printf("%lld", y);
	xy=x+y;
	//printf("%lld", xy);
	printf("Odleglosc miedzy punktami wynosi: %.3f", pow(xy,(1.0/2)));
	return 0;
}