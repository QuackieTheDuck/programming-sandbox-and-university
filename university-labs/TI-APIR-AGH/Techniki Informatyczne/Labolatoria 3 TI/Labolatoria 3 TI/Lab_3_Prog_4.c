#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (){
	int min, max, n, r, minbin, maxbin;
	int i;
	srand(time(NULL));
	printf("Podaj dolna granice zakresu losowania:\n");
	scanf("%d",&min);
	printf("Podaj gorna granice zakresu losowania:\n");
	scanf("%d",&max);
	int tab[(max-min)];
	tab[0]=min;
	tab[(max-min)-1]=max; // trzeba jakos zapelnic tablice numerami od min do max
	for(i=1; i<((max-min)-1) ;i++){
		tab[i]=min+i;
	}
	//printf("%d	%d",tab[0], tab[(max-min-1)]);  //sprawdzenie poprawnosci losowania tablicy
	n=min + ((rand()) % max);//przydatny schemat losowania liczby z przedzialu nie działa
	printf("\n%d\n", n); //sprawdzenie poprawnosci mechanizmu losujacego
    //wyszukiwanie binarne
    minbin=min;
    maxbin=max;
	do {
		r=(minbin+maxbin)/2;
		if(r<n) minbin=r+1;
		if(r>n) maxbin=r-1;
	} while (r!=n);	
	
	printf("Wylosowana liczba z przedzialu od %d do %d to %d", min, max, r);
	return 0;
}