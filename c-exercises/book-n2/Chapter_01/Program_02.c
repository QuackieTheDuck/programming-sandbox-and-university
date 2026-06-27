#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    if(puts("Witaj, swiecie!")!=EOF){       // in case of error during executing puts function it returns EOF 
        return EXIT_FAILURE;
        // This code wont be executed
    }
    getch();
    return EXIT_SUCCESS;
    // This code wont be executed
}
/* error in writing returns EOf 
    Everu line of code after return wont be executed as return ends the program with specifie return value
    */