#include<stdio.h>
#include<math.h>
//formatowanie liczb
int main (){
	printf("%-20d", 10+1);// definiowana jest dlugosc etykiety
	// znak - uzyty przy przywolaniu dziala jak przy tekscie to znaczy wyrownanie do lewej
	printf("%d10\n", 20+2);// znacznik \n dziala dokladnie tak jak w przypadku tekstu
	printf("%10d%10d\n",15 , 16); // dwa przywolania 1 przywoluje 1 liczbe itd
	printf("%+10d%+10d\n", 17, -18);/*dodanie flagi + przy przywolaniu
									powoduje wypisanie znaku jakim 
									obarczona jest dana liczba*/
	printf("%010d\n", 199 );// dopisanie 0 przed przywolaniem powoduje zapelnienie etykiety 0 w miejscach ktore normalnie bylu by NUL
	printf("%3.2f\n\n", 10/3.0);/*f sluzy do zmiennoprzecinkowych 
								liczba po kropce okresla dokladnosc 
								rozwiniecia dziesietnego*/
	// liczby zmiennoprzecinkowe
	printf("%15.3f\n", 3.14*1000);/* wartosc przed kropka okresla dlugosc etykiety
									natomiast wartosc po kropce okresla dokladnosc 
									w miejscach po przecinku*/
	printf("%-10.3f\n", 3.14*100);//minus wyrownuje do lewej
	printf("%+15.1f\n", 3.14); //plus dziala jak w calkowitych
	//program nie wykonuje zaokraglenia matematycznego tylko po prostu ucina liczbe
	printf("%-15.1f\n", -3.14);// - wyrownuje do lewej + pokazuje ujemnosc liczby
	printf("%.10f\n", 1.2345);// gdy liczba jest krotsza od etykiety miejsca po przecinku wypelniaja zera
	printf("%.0f\n", 1.2345*10);// gdy po kropce jest 0 ucina sie wszystko co po przecinku
	printf("%15f\n", 15/3.14);//domyslnie podawanie jest 6 miejsc po przecinku
	return 0;
}