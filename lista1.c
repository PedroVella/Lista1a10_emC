#define ex

#include "stdio.h"
#include "stdlib.h"

/*
1 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.

2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:
             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
3 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.


4 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321

5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.
*/

#ifdef ex1

    main()

{
    int a, b;

    printf("digite o valor de 'A':\n");
scanf("%d", &a);

    printf("digite o valor de 'B':\n");
scanf("%d", &b);

a = a + b;
b = a - b;
a = a - b;

    printf("Valor permutado de 'A': %d\n", a);
    printf("Valor permutado de 'B': %d\n", b);

return 0;

}
#endif // ex1

#ifdef ex2

main(){

 short int s;
 long int l;
 int i;
 char c;
 float f;
 double d;


    printf("digite o valor Short:\n");
scanf("%hd", &s);

    printf("digite o valor Long:\n");
scanf("%ld", &l);

    printf("digite o valor Int:\n");
scanf("%d", &i);

    printf("digite o valor Float:\n");
scanf("%f", &f);

    printf("digite o valor Double:\n");
scanf("%lf", &d);

    printf("digite o valor Char:\n");
scanf(" %c", &c);

    system("cls");

    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    %hd                  %ld                  %i\n", s, l, i);
    printf("              %f           %lf           %c\n", f, d, c);
    return 0;

}


#endif // ex2


#ifdef ex3

main(){
    int seg_total, hor, min, seg;

    printf("Digite a quantidade de segundos: \n");
scanf("%d", &seg_total);

    hor = seg_total / 3600;
    min = (seg_total % 3600) / 60;
    seg = seg_total % 60;

    printf("%d segundos equivalem a: %dh %dmin %ds\n", seg_total, hor, min, seg);

return 0;

}

#endif // ex3

#ifdef ex4

main(){
    int num, centena, dezena, unidade, num_invertido;

    printf("Digite um numero inteiro positivo de 3 digitos\n");
scanf("%3d", &num);

    while (num < 100) {

    printf("O numero tem que ser maior do que 100! Por favor, insira um numero de 3 digitos:\n");
scanf("%3d", &num);
    }

    centena = num / 100;
    dezena = (num / 10) % 10;
    unidade = num % 10;

    num_invertido = unidade * 100 + dezena * 10 + centena;

    printf("Numero Lido: %d\n", num);
    printf("Numero Invertido: %d\n", num_invertido);

    return 0;
}


#endif // ex4

#ifdef ex5

main(){
    int num, menor_mult, limite;

    printf("Digite um numero inteiro que voce deseja saber o seu menor multiplo: \n");
scanf("%d", &num);

    printf("Digite o valor minimo do multiplo: \n");
scanf("%d", &limite);

    if (limite % num == 0){
        menor_mult = limite + num;
    }
    else {
        menor_mult = ((limite / num)+ 1) * num;
    }

    printf("Menor multiplo de %d maior que %d. Resultado: %d", num, limite, menor_mult);

    return 0;
}

#endif // ex5