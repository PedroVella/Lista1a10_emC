#define ex
#include <stdio.h>

/*
1 - Receba via teclado 10 valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores 
    ordenados.

2 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double

3 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o 
    decomponha em dois outros vetores. Um tera´ as componentes de ordem impar 
    e o outro tera´ as componentes de ordem par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 9}, o programa
    deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3, 9}.

4 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o 
    decomponha em dois outros vetores. Um tera´ as componentes de valor impar 
    e o outro tera´ as componentes de valor par. 
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 4} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2, 4}. 

5 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    adicao "+", some os elementos de mesmo indice dos 2 vetores e guarde o
    resultado em um 3. vetor. Imprima na tela o indice, os valores e o resultado
    dos 6 elementos dos vetores.



*/

#ifdef ex1

int main() {
    int numeros[10];
    int i, x, temporario;
    char resp;

    do {
        printf("Insira 10 numeros inteiros:\n");
        for (i = 0; i < 10; i++) {
            printf("Numero %d: ", i + 1);
            scanf("%d", &numeros[i]);

            for (x = i; x > 0 && numeros[x] < numeros[x - 1]; x--) {
                temporario = numeros[x];
                numeros[x] = numeros[x - 1];
                numeros[x - 1] = temporario;
            }
        }

        printf("Numeros em ordem crescente:\n");
        for (i = 0; i < 10; i++) {
            printf("%d ", numeros[i]);
        }
        printf("\n");

        printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}

#endif //ex1

#ifdef ex2

int main() {
    int intArray[3];
    long longArray[3];
    unsigned unsignedArray[3];
    float floatArray[3];
    double doubleArray[3];
    char resp;

    do{
    for (int i = 0; i < 3; i++) {
        printf("Digite o valor inteiro %d: ", i + 1);
        scanf("%d", &intArray[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor long %d: ", i + 1);
        scanf("%ld", &longArray[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor unsigned %d: ", i + 1);
        scanf("%u", &unsignedArray[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor float %d: ", i + 1);
        scanf("%f", &floatArray[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor double %d: ", i + 1);
        scanf("%lf", &doubleArray[i]);
    }

    printf("\n");
    printf("            10        20        30        40        50\n");
    printf("    12345678901234567890123456789012345678901234567890\n");

    for (int i = 0; i < 3; i++) {
        printf("      %d                %ld                %u\n", intArray[i], longArray[i], unsignedArray[i]);
        printf("                %.2f               %.2f\n", floatArray[i], doubleArray[i]);
    }

     printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');
}

#endif // ex2

#ifdef ex3

int main() {
    int vetorOriginal[10];
    int vetorImpar[10];
    int vetorPar[10];
    int i, indiceImpar = 0, indicePar = 0;
    char resp;

    do {
        printf("Informe 10 numeros inteiros:\n");
        for (i = 0; i < 10; i++) {
            printf("Valor %d: ", i + 1);
            scanf("%d", &vetorOriginal[i]);
        }

        for (i = 0; i < 10; i++) {
            if (i % 2 == 0) {
                vetorImpar[indiceImpar++] = vetorOriginal[i];
            } else {
                vetorPar[indicePar++] = vetorOriginal[i];
            }
        }

        printf("Valores impares:\n");
        for (i = 0; i < indiceImpar; i++) {
            printf("%d ", vetorImpar[i]);
        }
        printf("\n");

        printf("Valores pares:\n");
        for (i = 0; i < indicePar; i++) {
            printf("%d ", vetorPar[i]);
        }
        printf("\n");

        printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}


#endif // ex3

#ifdef ex4

int main() {
    int vetorOriginal[10];
    int vetorImpar[10];
    int vetorPar[10];
    int i, indiceImpar = 0, indicePar = 0;
    char resp;

    do {
        printf("Informe 10 numeros inteiros:\n");
        for (i = 0; i < 10; i++) {
            printf("Valor %d: ", i + 1);
            scanf("%d", &vetorOriginal[i]);
        }

        for (i = 0; i < 10; i++) {
            if (vetorOriginal[i] % 2 == 0) {
                vetorPar[indicePar++] = vetorOriginal[i];
            } else {
                vetorImpar[indiceImpar++] = vetorOriginal[i];
            }
        }

        printf("Valores impares:\n");
        for (i = 0; i < indiceImpar; i++) {
            printf("%d ", vetorImpar[i]);
        }
        printf("\n");

        printf("Valores pares:\n");
        for (i = 0; i < indicePar; i++) {
            printf("%d ", vetorPar[i]);
        }
        printf("\n");

        printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');

    return 0;
}


#endif // ex4

#ifdef ex5

int main() {
    int matrizA[2][3], matrizB[2][3], matrizSoma[2][3];
    int i, j;
    char resp;

    do {
        printf("Insira os valores para a matriz A (2x3):\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                printf("A[%d][%d]: ", i, j);
                scanf("%d", &matrizA[i][j]);
            }
        }

        printf("Insira os valores para a matriz B (2x3):\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                printf("B[%d][%d]: ", i, j);
                scanf("%d", &matrizB[i][j]);
            }
        }

        for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }

        printf("Resultado da soma das matrizes:\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                printf("Soma[%d][%d] = %d (A[%d][%d] + B[%d][%d] = %d + %d)\n",
                       i, j, matrizSoma[i][j], i, j, i, j, matrizA[i][j], matrizB[i][j]);
            }
        }

        printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
     } while (resp == 's');


    return 0;
}



#endif // ex5

