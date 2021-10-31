#include <stdio.h>
#include <stdlib.h>

int numero_int = 10;
float numero_real = 1.0;
char letras[13] = "Hello world!";

int main(){
    printf("Numero inteiro: %d\n", numero_int);
    printf("Numero real: %.2f\n", numero_real);
    printf("Strings: %c\n", letras);
    printf("\n");

    printf("Aperte ENTER para parar o programa.\n");
    getch();
    return 0;
}