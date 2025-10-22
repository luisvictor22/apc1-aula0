#include <stdio.h>

int main() {
    int numero;
    int fatorial;

    scanf("%i", &fatorial);
    scanf("%i", &numero);
    for(int i=numero; i>0; i--) {
        fatorial = fatorial * i;
        printf("%i\n", i);
}

    return 0;
}