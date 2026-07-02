#include <stdio.h>
//formatowanie tekstu
int main (){
	printf("==============\n");
	printf("Dziendobry");
	printf("\n\n\n");//nowa linia
	printf("Dobrywieczor""\n\n");//znaki nowej linii nie musza byc umieszczane po przecinku?
	printf("%20s\n","Dobranoc"); //okresla dlugosc etykiety wyrownuje do prawej
	printf("%-50s\n","Dobranoc"); //jak wyzej z tym ze wyrownanie odbywa sie do lewej
	printf("%10.7s\n", "Dobranoc");// cyfra przed przecinkiem to dlugosc etykiety cyfra po przecinku okresla dokladnosc przytoczenia tekstu
	//s uzywanie jest do tekstu, d do calkowitych, f do zmiennoprzecinkowych
	printf("%10d\n", 2016);// okreslana jest dlugosc etykiety
	printf("%-20d\n",2016);// - sprawia wyrownanie do lewej
	printf("Przywolanie %s oraz liczby np %d\n","tekstu", 4175 ); // jak we wczesniejaszym komentarzu
	return 0;
}