// opisanie zasiegow
// wychodzi na to ze mniejsze zasiegi przykrywaja wieksze?
// do wytestowania
#include <stdio.h>
int i=5;
int main(){
	printf("%d\n",i);
	int i=4;
	printf("%d\n",i);
	for(int i=0; i<3; ++i){
		printf("%d\n",i);
	} 
	return 0;
}
// bardziej "lokalne" zasiegi przykrywaja te globalne
