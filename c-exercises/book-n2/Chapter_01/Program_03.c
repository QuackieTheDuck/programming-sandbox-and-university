// alternative version of Program_02 in order to experiment with printf function

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    if(printf("%s\n", "Witaj, swiecie!")==EOF){
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}