#define ex

#include "stdio.h"
#include "stdlib.h"

/*
1 - Escreva um programa que receba um numero N via teclado. Escreva uma funcao
    que retorne a soma dos algarismos do resultado de N!. O resultado deve ser
    mostrado na funcao main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos e´ 2 + 4 = 6.

2 - Escreva um programa que receba dois numeros inteiros e execute as seguintes
    funçoes:
    - Verificar se o numero digitado e' positivo ou negativo. Sendo que o valor de
      retorno sera' 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 numeros sao positivos, retorne a soma dos N numeros existentes entre
      eles.
    - Se os 2 numeros sao negativos, retorne a multiplicacao dos N numeros existente
      entre eles.
    - Se 1. numero for positivo e o 2. negativo faca a divisao entre eles.

3 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima os 4 resultados no video na funcao main().

4 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.

5 - Escreva um programa que receba n valores inteiros via teclado na funcao main().
    Faca uma calculadora com as 4 operacoes aritmeticas.(utilize o comando switch).
    As operacoes aritmeticas devem ser funcoes. O resultado acumulado deve ser 
    mostrado na funcao main().
*/

#ifdef ex1

int fatorial(int n) {
   int resultado = 1;
    for (int i = 1; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

int soma_alg(int numero){
int soma = 0;
while (numero > 0) {
    soma += numero % 10;
    numero /= 10;
}
return soma;
}

main(){
     int n;
     char resp;

     do{
printf("digite o numero que vc quer fatorial:\n");
scanf("%i", &n);

int resultadofat = fatorial(n);
int resultadosoma = soma_alg(resultadofat);

printf("N = %i, N! = %i, e a soma dos algarismos de %i e': %i\n", n, resultadofat, resultadofat, resultadosoma);
  printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');
    return 0;
}

#endif //ex1

#ifdef ex2



int verifica_numero(int n) {
    if (n > 0) {
        return 1;
    } else if (n < 0) {
        return 0;
    } else {
        return -1;
    }
}


int soma_entre(int num1, int num2) {
    int soma = 0;


    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }


    for (int i = num1; i <= num2; i++) {
        soma += i;
    }
    return soma;
}


int multiplicacao_entre(int num1, int num2) {
    int produto = 1;


    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }


    for (int i = num1; i <= num2; i++) {
        produto *= i;
    }
    return produto;
}

float divisao(int num1, int num2) {
    return (float) num1 / num2;
}

int main() {
    int num1, num2;
    char resp;

    do {

        printf("Digite o primeiro numero:\n");
        scanf("%i", &num1);
        printf("Digite o segundo numero:\n");
        scanf("%i", &num2);

        int verif_num1 = verifica_numero(num1);
        int verif_num2 = verifica_numero(num2);

        if (verif_num1 == 1 && verif_num2 == 1) {
            int resultado_soma = soma_entre(num1, num2);
            printf("A soma dos numeros entre %i e %i e': %i\n", num1, num2, resultado_soma);
        }
        else if (verif_num1 == 0 && verif_num2 == 0) {
            int resultado_mult = multiplicacao_entre(num1, num2);
            printf("A multiplicacao dos numeros entre %i e %i e': %i\n", num1, num2, resultado_mult);
        }
        else if ((verif_num1 == 1 && verif_num2 == 0) || (verif_num1 == 0 && verif_num2 == 1)) {
            float resultado_div = divisao(num1, num2);
            printf("A divisao entre %i e %i e': %.2f\n", num1, num2, resultado_div);
        }
        else {
            printf("Um ou ambos os numeros sao iguais a 0, operacao nao permitida.\n");
        }


        printf("\nVoce quer continuar s ou n?\n");
        getchar();
        scanf("%c", &resp);
    } while (resp == 's');

    return 0;
}
#endif // ex2

#ifdef ex3

int soma(int a, int b) {
    return a + b;
}


int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Divisao por zero nao e' permitida.\n");
        return 0;
    }
}

int main() {
    int num1, num2;
    char resp;

    do {

        printf("Digite o primeiro numero:\n");
        scanf("%i", &num1);
        printf("Digite o segundo numero:\n");
        scanf("%i", &num2);


        int resultado_soma = soma(num1, num2);
        int resultado_sub = subtracao(num1, num2);
        int resultado_mult = multiplicacao(num1, num2);
        float resultado_div = divisao(num1, num2);


        printf("Soma: %i\n", resultado_soma);
        printf("Subtracao: %i\n", resultado_sub);
        printf("Multiplicacao: %i\n", resultado_mult);
        if (num2 != 0) {
            printf("Divisao: %.2f\n", resultado_div);
        }


        printf("Voce quer continuar (s/n)?\n");
        getchar(); //
        scanf("%c", &resp);
    } while (resp == 's');

    return 0;
}


#endif // ex3

#ifdef ex4

#define MAX_VALORES 100

int soma(int *valores, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += valores[i];
    }
    return total;
}

int multiplicacao(int *valores, int n) {
    int total = 1;
    for (int i = 0; i < n; i++) {
        total *= valores[i];
    }
    return total;
}

float divisao(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Divisao por zero nao e' permitida.\n");
        return 0;
    }
}

int subtracao(int *valores, int n) {
    int total = valores[0];
    for (int i = 1; i < n; i++) {
        total -= valores[i];
    }
    return total;
}

int main() {
    int n;
    char resp;
    int valores[MAX_VALORES];

    do {
        printf("Quantos numeros voce quer inserir?\n");
        scanf("%i", &n);

        if (n > MAX_VALORES) {
            printf("Numero de valores excede o limite permitido.\n");
            continue;
        }

        for (int i = 0; i < n; i++) {
            printf("Digite o numero %i:\n", i + 1);
            scanf("%i", &valores[i]);
        }

        int soma_resultado = soma(valores, n);
        int subtracao_resultado = subtracao(valores, n);
        int multiplicacao_resultado = multiplicacao(valores, n);
        float divisao_resultado = (n >= 2) ? divisao(valores[0], valores[1]) : 0;

        printf("Soma: %i\n", soma_resultado);
        printf("Subtracao: %i\n", subtracao_resultado);
        printf("Multiplicacao: %i\n", multiplicacao_resultado);

        if (n >= 2) {
            printf("Divisao: %.2f\n", divisao_resultado);
        } else {
            printf("Para a divisao, sao necessarios pelo menos 2 numeros.\n");
        }

        printf("Voce quer continuar (s/n)?\n");
        getchar();
        scanf("%c", &resp);
    } while (resp == 's');

    return 0;
}

#endif // ex4

#ifdef ex5

#define MAX_VALORES 100

int soma(int *valores, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += valores[i];
    }
    return total;
}

int multiplicacao(int *valores, int n) {
    int total = 1;
    for (int i = 0; i < n; i++) {
        total *= valores[i];
    }
    return total;
}

float divisao(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Divisao por zero nao e' permitida.\n");
        return 0;
    }
}

int subtracao(int *valores, int n) {
    int total = valores[0];
    for (int i = 1; i < n; i++) {
        total -= valores[i];
    }
    return total;
}

int main() {
    int n;
    char resp;
    int valores[MAX_VALORES];

    do {
        printf("Quantos numeros voce quer inserir?\n");
        scanf("%i", &n);

        if (n > MAX_VALORES) {
            printf("Numero de valores excede o limite permitido.\n");
            continue;
        }

        for (int i = 0; i < n; i++) {
            printf("Digite o numero %i:\n", i + 1);
            scanf("%i", &valores[i]);
        }

        int operacao;
        printf("Escolha a operacao: 1. Soma, 2. Subtracao, 3. Multiplicacao, 4. Divisao\n");
        scanf("%i", &operacao);

        float resultado;
        switch (operacao) {
            case 1:
                resultado = soma(valores, n);
                printf("Soma: %i\n", (int)resultado);
                break;
            case 2:
                resultado = subtracao(valores, n);
                printf("Subtracao: %i\n", (int)resultado);
                break;
            case 3:
                resultado = multiplicacao(valores, n);
                printf("Multiplicacao: %i\n", (int)resultado);
                break;
            case 4:
                if (n >= 2) {
                    resultado = divisao(valores[0], valores[1]);
                    printf("Divisao: %.2f\n", resultado);
                } else {
                    printf("Para a divisao, sao necessarios pelo menos 2 numeros.\n");
                }
                break;
            default:
                printf("Operacao invalida.\n");
                break;
        }

        printf("Voce quer continuar (s/n)?\n");
        getchar();
        scanf("%c", &resp);
    } while (resp == 's');

    return 0;
}

#endif // ex5
