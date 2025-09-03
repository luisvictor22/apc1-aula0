#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");
    // 1)tipos de dados
    // char - caracter
    // int - inteiro
    // float - flutante ate 6 casas
    // double - flutante ate 12 casas
    // void - sem tipo

    // 2) variaveis e constantes
    int idade = 19;
    char tecla = 's';
    float nota = 8.5f;
    const double pi = 3.1415169226;


    printf("Os valores das variavies:\n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);
    printf("pi = %.12f\n", pi);

    printf("\nInforme os novos valores:\n");
    scanf("%i", &idade);
    getchar(); // ler uma tecla limpa \n
    scanf("%c", &tecla);
    getchar(); //ler uma tecla limpa \n
    scanf("%f", &nota);

    printf("Os novos valores são:\n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);
    // scanf("%f", pi); nao pode!!


    return 0;
}