#include <stdio.h>

int main(){
	int tab[10]={0};
	int i;
	long long silnia=1;
	tab[0]=1;
	for (i=1;i<=10;i++){
		silnia*=i;
		tab[i]=silnia;
	}
	for(i=1;i<=10;i++){
	printf("%d   %6d\n", i-1, tab[i-1]);
	}
	return 0;
}