#include <stdio.h>
#include <math.h> //biblioteca de matematica

int main() {
    int numero1 = 10;
    int numero2 = 20;
    
    // operadores aritmeticos
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    int divisao = numero1 / (numero2 * 1.0);
    int resto_da_divisao = numero1 % numero2;

    printf("A soma %i com %i eh %i\n", numero1, numero2, soma);
    printf("A subtracao de %i por %i eh %i\n", numero1, numero2, subtracao);
    printf("A multiplicacao de %i com %i eh %i\n", numero1, numero2, multiplicacao);
    printf("A divisao de %i por %i eh %i\n", numero1, numero2, divisao);


    // operadores incremento e decremento
    int incremento = numero1;
    int decremento = numero1;
    incremento++; // numero1 = numero1 + 1;
    decremento--; // numero1 = numero1 - 1;
    int pre_incremento = numero1;
    int pos_incremento = numero1;
    
    printf("o incremento de %i eh %i\n", numero1, incremento);
    printf("o decremento de %i eh %i\n", numero1, decremento);
    printf("o pre_incremento de %i eh %i\n", numero1, ++pos_incremento);
    printf("o pos_incremento de %i eh %i\n", numero1, pos_incremento++);
    printf("o pos_incremento agora eh %i\n", pos_incremento);

    // operadores relacionais
    int menor_que = numero1 < numero2;
    int menor_ou_igual = numero1 <= numero2;
    int maior_que = numero1 > numero2;
    int maior_ou_igual = numero1 > numero2;
    int igual = numero1 == numero2;
    int diferente = numero1 != numero2;
    
    // 0 - falso, 1 - verdadeiro
    printf("o numero %i eh menor que %i? %i\n", numero1, numero2, menor_que);
    printf("o numero %i eh menor ou igual a %i? %i\n", numero1, numero2, menor_ou_igual);
    printf("o numero %i eh maior que %i? %i\n", numero1, numero2, maior_que);
    printf("o numero %i eh maior ou igual a %i? %i\n", numero1, numero2, maior_ou_igual);
    printf("o numero %i eh igual %i? %i\n", numero1, numero2, igual);
    printf("o numero %i eh diferente %i? %i\n", numero1, numero2, diferente);

    // operadores logicos
    float media = 5.0f;
    float falta = 0.25;
    int operador_E = media >= 5.0f && falta <= 0.25f;
    printf("Passei? %i\n", operador_E);
    int operador_OU = media >= 5.0f || falta <= 0.25f;
    printf("Passei? %i\n", operador_OU);
    int operador_NAO = ! (media >= 5.0f);
    printf("Passei? %i\n", operador_NAO);

    // 0 < numero < 10 na matematica
    // 0 < numero && numero < 10 na programacao
    // falso e qualquer coisa e falso
    // verdadeiro ou qualquer coisa e verdadeiro

    // funcoes da matematica
    // raiz quadrada, logaritmo, exponecial,
    // tangente, seno, coseno

    // #include <math.h> biblioteca de matematica
    
    const double PI = 3.1415;
    double raiz_quadrada_de_2 = sqrt(2);
    double potencia_de_3 = pow(2, 3);
    double logaritmo_base10 = log10(2);
    double exponecial = exp(2);
    double cosseno_90 = cos(90 * (PI / 180)); // converter p/ radiano

    printf("A raiz quadrada de 2 = %.2f\n", raiz_quadrada_de_2);
    printf("A potencia de 2 elevado a 3 = %.0f\n", potencia_de_3);
    printf("O logaritmo de 2 na base 10 = %.2f\n", logaritmo_base10);
    printf("A exponecial de 2 = %.2f\n", exponecial);
    printf("O cosseno de 90 = %.2f\n", cosseno_90);

    // precedencia
    // 0. ()
    // 1. * / %
    // 2. + -
    int expressao1 = 2 - 5 / 3 * 4 + 1; 
    // 5 / 3 = 1, 2 - 1 * 4 + 1
    // 1 * 4 = 4, 2 - 4 + 1
    // 2 - 4 = -2 + 1
    // -1
    int expressao2 = 2 - 5 / (3 * 4) + 1;
    // (3 * 4) = 12, 2 - 5 / 12 + 1
    // 5 / 12 = 0, 2 - 0 + 1
    // 2 - 0 = 2, 2 + 1
    // 2 + 1 = 3
    printf("A expressao 2 - 5 / 3 * 4 + 1 = %i\n", expressao1);
    printf("A expressao 2 - 5 / (3 * 4) + 1 = %i\n", expressao2);




    return 0;
}