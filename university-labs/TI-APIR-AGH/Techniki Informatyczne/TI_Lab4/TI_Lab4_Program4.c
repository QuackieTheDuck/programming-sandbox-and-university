#include <math.h>
#include <stdio.h>

struct Punkt {
	int x,y;
};

struct Okrag {
	int x, y, r;
};

int main (){
	struct Punkt P;
	struct Okrag O;
	int xx, yy, xy;
	float odl;
	printf("Podaj wspolrzedna x badanego punktu: ");
	scanf("%d", &P.x);
	printf("Podaj wspolrzedna y badanego punktu: ");
	scanf("%d", &P.y);
	printf("Podaj parametry okregu:\n promien r:");
	scanf("%d", &O.r);
	printf("Wspolrzedna x srodka okregu: ");
	scanf("%d", &O.x);
	printf("Wspolrzedna y srodka okregu: ");
	scanf("%d", &O.y);
	xx=pow(P.x-O.x,2);
	yy=pow(P.y-O.y,2);
	xy=xx-yy;
	odl=pow(xy,(1.0/2));
	if(odl<O.r){
		printf("Punkt znajduje sie w okregu");
	}else if(odl==O.r){
		printf("Punkt lezy na okregu");
	}else if(odl>O.r){
		printf("Punkt lezy poza okregiem");
	}
	return 0;
}