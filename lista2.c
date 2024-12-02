#define ex

#include "stdio.h"
#include "stdlib.h"

/*
1 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.

2 - Reescreva o programa do exercicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.

3 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.

4 - Receba via teclado a distancia em km e a quantidade de litros de gasolina
    consumidos por um carro em um percurso.
    Calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela 
    abaixo:
    CONSUMO (km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!

5 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.

*/

#ifdef ex1

int main(){

    int min = 1, max = 99, palpite;
    char resposta;
    char resp;

    do{
    printf("Pense em um numero entre 1 e 99 e eu vou advinhar!\n\n");
   do{
    palpite = (min + max) / 2;
    printf("O valor que voce pensou e' %d?\n", palpite);
    printf("Digite '=' se o numero for igual, '>' se for maior e '<' se for menor\n");
    scanf(" %c", &resposta);

    if (resposta == '='){
        printf("Acertei! o numero que voce pensou e' %d \n", palpite);
    }
    else if (resposta == '>'){
        min = palpite + 1;
    }
    else if (resposta == '<'){
        max = palpite - 1;
    }
    else {
            printf("Entrada invalida. Por favor, digite '>', '<', ou '='.\n");
        }
}
   while (resposta != '=');
   printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
    } while (resp == 's');

return 0;
}

#endif // ex1

#ifdef ex2

int main(){

    int min = 1, max = 99, palpite;
    char resposta;
    char resp;
    do{
    printf("Pense em um numero entre 1 e 99 e eu vou advinhar!\n\n");
   do{
    palpite = (min + max) / 2;
    printf("O valor que voce pensou e' %d?\n", palpite);
    printf("Digite '=' se o numero for igual, '>' se for maior e '<' se for menor\n");
    scanf(" %c", &resposta);
     switch (resposta) {

case '=':
    {
        printf("Acertei! o numero que voce pensou e' %d \n", palpite);
        break;
    }
case '>':
    {
        min = palpite + 1;
        break;
    }
case '<':
    {
        max = palpite - 1;
        break;
    }
    default:
        {
            printf("Entrada invalida. Por favor, digite '>', '<', ou '='.\n");
            break;
        }
        }
}
   while (resposta != '=');

   printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
    } while (resp == 's');

return 0;
}

#endif // ex2

#ifdef ex3

int main() {
    float num;
    int quantidade = 0;
    float soma = 0;
    float media;
    char resp;

        do{
        printf("Digite numeros inteiros positivos.\nPara parar e descobrir a media deles, digite um numero negativo:\n");

   do{
    scanf("%f", &num);
        if (num < 0){
            break;
        }

        soma += num;
        quantidade++;

}while (num >= 0);

    media = soma / quantidade;
        printf("A media dos numeros positivos digitados e': %.2f", media);
   printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
        } while (resp == 's');

return 0;


}

#endif // ex3

#ifdef ex4

main(){
    int km, l, kml;
    char resp;

    do{
    printf("Digite a distancia em KM percorrida pelo seu carro: \n");
scanf("%d", &km);

    printf("Digite o consumo em L do seu carro nesse caminho percorrido: \n");
scanf("%d", &l);

    kml = km / l;

        if(kml < 8){
            printf("seu consumo e': %dKM/L \n", kml);
            printf("Venda o carro!\n");
        }
        else if (kml >= 8 && kml <= 14) {
            printf("seu consumo e': %dKM/L \n", kml);
            printf("Economico!\n");
                 }
        else {
            printf("seu consumo e': %dKM/L \n", kml);
            printf("Super economico!\n");
        }
   printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
   } while (resp == 's');
return 0;
}


#endif // ex4

#ifdef ex5

main(){
    int h1, h2, hf, m1, m2, mf, s1, s2, sf, segundo1, segundo2, diferenca;
    char resp;

    do{
        printf("Digite em qual HORA voce INICIOU a ligacao: \n");
    scanf("%d", &h1);
        printf("Digite em qual MINUTO voce INICIOU a ligacao: \n");
    scanf("%d", &m1);
        printf("Digite em qual SEGUNDO voce INICIOU a ligacao: \n");
    scanf("%d", &s1);

        printf("\nAgora digite em qual HORA voce CONCLUIU a ligacao: \n");
    scanf("%d", &h2);
        printf("Digite em qual MINUTO voce CONCLUIU a ligacao: \n");
    scanf("%d", &m2);
        printf("Digite em qual SEGUNDO voce CONCLUIU a ligacao: \n");
    scanf("%d", &s2);

        segundo1 = h1 * 3600 + m1 * 60 + s1;
        segundo2 = h2 * 3600 + m2 * 60 + s2;
    if (segundo2 >= segundo1){
        diferenca = segundo2 - segundo1;
    }
    else {
        diferenca = (24 * 3600 - segundo1) + segundo2;
    }
        hf = diferenca / 3600;
        mf = (diferenca % 3600) / 60;
        sf = diferenca % 60;

    printf("\nO intervalo de tempo decorrido foi de: %dh %dm %ds", hf, mf, sf);
   printf("\nvoce quer continuar s ou n?\n");
   getchar();
   scanf("%c", &resp);
    } while(resp == 's');
return 0;
}


#endif // ex5
