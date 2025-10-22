#include <stdio.h>

int main() {
    int nota;
    printf("Entre com uma nota de 1 a 5: ");
    scanf("%i", &nota);

    if (nota == 1) {
        printf("Sua avaliacao foi *\n");
    } else if (nota == 2) {
        printf("Sua avaliacao foi **\n");
    } else if (nota == 3) {
        printf("Sua avalicao foi ***\n");
    } else if (nota == 4) {
        printf("Sua avalicao foi ****\n");
    } else if (nota == 5) {
        printf("Sua avalicao foi *****\n");
    } else { 
        printf("Nota invalida. Tente novamente\n");
    }

    switch (nota) {
        case 1:printf("Sua avalicao foi *\n"); break;
        case 2:printf("Sua avalicao foi **\n"); break;
        case 3:printf("Sua avalicao foi ***\n"); break;
        case 4:printf("Sua avalicao foi ****\n"); break;
        case 5:printf("Sua avalicao foi *****\n"); break;
        default: printf("Nota invalida. Tente novamente\n");
    }

    return 0;
}