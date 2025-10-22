#include <stdio.h>

int main() {
    int numero = 0;

    printf("Entre com um numero: ");
    int leu_ceto = scanf("%i", &numero);

    while (leu_ceto == 0) {
        while (getchar() != '\n'); //limpar o buffer
        printf("Nao eh um numero! Tente novamente.\n");
        printf("Entre com um numero: ");
        leu_ceto = scanf("%i", &numero);
    }


    return 0;
}