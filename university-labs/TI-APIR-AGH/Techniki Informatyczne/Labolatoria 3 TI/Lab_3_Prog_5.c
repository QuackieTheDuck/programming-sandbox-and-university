#include <stdio.h>
#include <stdlib.h>

long long silnia(int n){
	if (n==0) return (1);
	else return (n*silnia(n-1));
}

int main (){
	int n;
	printf("Podaj liczbe n:\n");
	scanf("%d", &n);
	printf("Silnia z liczby %d wynosi %lld", n, silnia(n));
	return 0;
}