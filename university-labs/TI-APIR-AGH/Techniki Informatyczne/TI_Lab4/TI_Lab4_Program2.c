#include <stdio.h>
#include <stdlib.h>

int main (){
	int a, b;
	char dzialanie;
	start:
	printf("Podaj liczbe a=");
	scanf("%d", &a);
	printf("Podaj liczbe b=");
	scanf("%d", &b);
	printf("+ dodawanie\n - odejmowanie\n * mnozenie\n / dzielenie\n Jaka operacje chcesz wykonac?");
	scanf(" %c", &dzialanie);
	switch (dzialanie){
		case '+' :
			printf("a %c b= %d", dzialanie, (a+b));
			break;
		case '-' :
			printf("a %c b= %d",dzialanie, a-b);
			break;
		case '*':
			printf("a %c b= %d",dzialanie, a*b);
			break;
		case '/' :
			printf("a %c b= %.3f",dzialanie, a*1.0/b);
			break;
		default: printf("Nie wykonuje takiej operacji");
	}
	getchar(), getchar();
	system ("cls");
	goto start;
	return 0;
}