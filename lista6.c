#define ex

#include "stdio.h"

/*
1 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual.

2 - Escreva um programa que receba via teclado uma data (dia, mes, e ano).
    Determine o dia da semana desta data.

3 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.

4 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.

5 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.
*/


#ifdef ex1


int main() {
    int dia_nascimento, mes_nascimento, ano_nascimento;
    int dia_atual, mes_atual, ano_atual;
    int anos_de_idade, meses_de_idade, dias_de_idade;
    char resp;

    do {
        printf("Informe o dia do seu nascimento: ");
        scanf("%d", &dia_nascimento);
        printf("Informe o mes do seu nascimento: ");
        scanf("%d", &mes_nascimento);
        printf("Informe o ano do seu nascimento: ");
        scanf("%d", &ano_nascimento);
        printf("Informe o dia atual: ");
        scanf("%d", &dia_atual);
        printf("Informe o mes atual: ");
        scanf("%d", &mes_atual);
        printf("Informe o ano atual: ");
        scanf("%d", &ano_atual);

        anos_de_idade = ano_atual - ano_nascimento;
        meses_de_idade = mes_atual - mes_nascimento;
        dias_de_idade = dia_atual - dia_nascimento;

        if (dias_de_idade < 0) {
            dias_de_idade += 30;
            meses_de_idade--;
        }
        if (meses_de_idade < 0) {
            meses_de_idade += 12;
            anos_de_idade--;
        }

        printf("Sua idade e': %d anos, %d meses e %d dias\n", anos_de_idade, meses_de_idade, dias_de_idade);
        printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');
    return 0;
}


#endif // ex1

#ifdef ex2


int main() {
    int dia, mes, ano, k, j, dia_semana;
    char resp;

    do {
        printf("Informe o dia da data: ");
        scanf("%d", &dia);
        printf("Informe o mes da data: ");
        scanf("%d", &mes);
        printf("Informe o ano da data: ");
        scanf("%d", &ano);

        if (mes < 3) {
            mes += 12;
            ano--;
        }

        k = ano % 100;
        j = ano / 100;

        dia_semana = (dia + (13 * (mes + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

        printf("O dia da semana e': %d (0 = Sabado, 1 = Domingo, 2 = Segunda, 3 = Terca, 4 = Quarta, 5 = Quinta, 6 = Sexta)\n", dia_semana);
        printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}


#endif // ex2

#ifdef ex3


int main() {
    int numero1, numero2;
    char resp;

    do {
        printf("Por favor, insira o primeiro numero: ");
        scanf("%d", &numero1);
        printf("Agora, insira o segundo numero: ");
        scanf("%d", &numero2);

        printf("\nResultado da operacao AND:\nDecimal: %d\nHexadecimal: %x\n", numero1 & numero2, numero1 & numero2);
        printf("\nResultado da operacao OU:\nDecimal: %d\nHexadecimal: %x\n", numero1 | numero2, numero1 | numero2);
        printf("\nResultado da operacao OU EXCLUSIVO:\nDecimal: %d\nHexadecimal: %x\n", numero1 ^ numero2, numero1 ^ numero2);

        printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}


#endif // ex3

#ifdef ex4

int main() {
    int primeiro_numero, segundo_numero;
    char resp;

    do {
        printf("Insira o primeiro numero inteiro: ");
        scanf("%d", &primeiro_numero);
        printf("Insira o segundo numero inteiro: ");
        scanf("%d", &segundo_numero);

        printf("Resultado da soma: %d\n", primeiro_numero + segundo_numero);
        printf("Resultado da subtracao: %d\n", primeiro_numero - segundo_numero);
        printf("Resultado da multiplicacao: %d\n", primeiro_numero * segundo_numero);
        printf("Resultado da divisao: %d\n", primeiro_numero / segundo_numero);

        printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}

#endif // ex4

#ifdef ex5

#include <stdio.h>

int main() {
    int primeiro_numero, segundo_numero;
    char resp;

    do {
        printf("Por favor, digite o primeiro numero inteiro: ");
        scanf("%d", &primeiro_numero);
        printf("Agora, insira o segundo numero inteiro: ");
        scanf("%d", &segundo_numero);

        printf("Resultado da soma: %d\n", primeiro_numero += segundo_numero);
        printf("Resultado da subtracao: %d\n", primeiro_numero -= segundo_numero);
        printf("Resultado da multiplicacao: %d\n", primeiro_numero *= segundo_numero);
        printf("Resultado da divisao: %d\n", primeiro_numero /= segundo_numero);

       printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}


#endif // ex5
