#define ex
#include <stdio.h>

/*1 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Faça uma
    funcao para compara-las e retorne como resultado se são IGUAIS 1 ou se
    DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main().
    (Declare os vetores como variavel global) (nao pode usar funcao de biblioteca)

2 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:(Declare os 5 vetores como variaveis
    globais)

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3

3 - Escreva um programa que receba uma string na funcao main(). Faca uma funcao que
    calcula o comprimento de uma string recebida via teclado. Mostre o valor do
    comprimento na funcao main().
    (Declare o vetor como variavel global) (nao pode usar funcao de biblioteca)

4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas. (nao pode usar funcao de biblioteca)

5 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas. (nao pode usar funcao de biblioteca)
*/


#ifdef ex1

char cadeia1[11];
char cadeia2[11];

void transformarParaMaiusculas(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main() {
    char resp;

    do {
        printf("Informe a primeira sequencia de letras minusculas: ");
        scanf("%s", cadeia1);
        printf("Informe a segunda sequencia de letras minusculas: ");
        scanf("%s", cadeia2);

        transformarParaMaiusculas(cadeia1);
        transformarParaMaiusculas(cadeia2);

        printf("Primeira string em maiusculas: %s\n", cadeia1);
        printf("Segunda string em maiusculas: %s\n", cadeia2);

        printf("\nvoce quer continuar s ou n?\n");
    getchar();
    scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}


#endif // ex1

#ifdef ex2

char nomes[5][8];

int main() {
    char resp;

    do {

        for (int i = 0; i < 5; i++) {
            printf("Digite o nome %d (maximo de 7 caracteres): ", i + 1);
            scanf("%7s", nomes[i]);
        }


        printf("\n");
        printf("            10        20        30        40        50\n");
        printf("    12345678901234567890123456789012345678901234567890\n");
        printf("      %s                                   %s\n", nomes[0], nomes[4]);
        printf("                %s               %s\n", nomes[1], nomes[3]);
        printf("                          %s\n", nomes[2]);


        printf("\nvoce quer continuar s ou n?\n");
    getchar();
    scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}


#endif // ex2

#ifdef ex3

#include <stdio.h>

char string[51];

int calcularTamanho() {
    int tamanho = 0;
    while (string[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

int main() {
    char resp;

    do {
        printf("Digite uma sequencia de caracteres: ");
        scanf("%s", string);

        int comprimento = calcularTamanho();
        printf("O tamanho da string e': %d\n", comprimento);

        printf("\nvoce quer continuar s ou n?\n");
    getchar();
    scanf("%c", &resp);
     } while (resp == 's');
    return 0;
}


#endif // ex3

#ifdef ex4

#include <stdio.h>

char string[11];

void converterParaMaiusculas() {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 'a' + 'A';
        }
    }
}

int main() {
    char resp;

    do {
        printf("Digite uma string com letras minusculas (maximo de 10 caracteres): ");
        scanf("%s", string);

        converterParaMaiusculas();
        printf("String em maiusculas: %s\n", string);

        printf("\nvoce quer continuar s ou n?\n");
    getchar();
    scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}


#endif // ex4

#ifdef ex5

#include <stdio.h>

char string[11];

void converterParaMinusculas() {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = string[i] - 'A' + 'a';
        }
    }
}

int main() {
    char resp;

    do {
        printf("Digite uma string com letras maiusculas : ");
        scanf("%s", string);

        converterParaMinusculas();
        printf("String em minusculas: %s\n", string);

        printf("\nvoce quer continuar s ou n?\n");
    getchar();
    scanf("%c", &resp);
     } while (resp == 's');
    return 0;
}


#endif // ex5
