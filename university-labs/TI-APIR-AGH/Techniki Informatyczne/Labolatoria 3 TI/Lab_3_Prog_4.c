#include <stdio.h>
#include <stdlib.h>

int main (){
	int min, max, n, r;
	int i;
	printf("Podaj dolna granice zakresu losowania:\n");
	scanf("%d",&min);
	printf("Podaj gorna granice zakresu losowania:\n");
	scanf("%d",&max);
	int tab[max-min];
	tab[0]=min;
	for(i=min; i<max;i++){
		tab[i]=min+i;
	}
	
	printf("%d	%d",tab[0], tab[max-min-1]);
	
	/*losowanie:
	n=rand();
	if(n>min&&n<max){
		//tutaj trzeba wcisnac kod, albo zdefiniowac funkcje odpowiadajaca za szukanie binarne
		printf("%d", n);
	} else goto losowanie;*/
	return 0;
}