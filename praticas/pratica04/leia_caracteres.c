#include <stdio.h>

int main() {
char tecla; 
char nome [31];
    printf("Digite uma tecla: ");
    printf("Voce digitou: %c\n", tecla);
    printf("Digite seu nome: ");
    printf("Voce digitou: %s\n", nome);
    scanf("%s", nome);
    getchar();
    scanf("%c", &tecla);
    getchar();
    scanf("%s[^\n]s", nome);
    getchar();


  return 0;
}
