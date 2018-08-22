#include <stdio.h>
#include <math.h>

// É necessário declarar as funções para poder usar na função "Main"
void linha();
void num01();
void num02();
void num03();
void num04();
void num05();
void num06();
// Função principal
int main()
{
    int exercicio;
    linha();
    printf("Digite o numero do exercicio: \n");
    scanf("%d", &exercicio);
    linha();

    // Vai entrar em um "case" de acordo com o valor da variavel "exercicio"
    switch(exercicio) {
        case(1):
            printf("Exercicio 01 \n");
            linha();
            num01();
        break;
        case(2):
            printf("Exercicio 02 \n");
            linha();
            num02();
        break;
        case(3):
            printf("Exercicio 03 \n");
            linha();
            num03();
        break;
        case(4):
            printf("Exercicio 04 \n");
            linha();
            num04();
        break;
        case(5):
            printf("Exercicio 05 \n");
            linha();
            num05();
        break;
        case(6):
            printf("Exercicio 06 \n");
            linha();
            num06();
        break;
        default:
            printf("Exercicio não encontrado ou não terminado :) \n");
        break;
    }

    linha();
    return 0;
}

void linha() {
    printf("-----------------------\n");
}

// Retorna o resto da divisão de um numero por 2
void num01() {
    int num;
    printf("Digite um numero\n");
    scanf("%d", &num);
    printf("O resto da divisão de %d por 2 eh: %d \n", num, num%2);
}

// Retorna o primeiro numero elevado ao segundo
void num02() {
    float num1, num2;
    printf("Digite o primeiro valor\n");
    scanf("%f", &num1);
    printf("Digite o segundo valor\n");
    scanf("%f", &num2);

    printf("O valor %.2f elevado a %.2f eh: %.2f\n", num1, num2,  pow(num1, num2));
}

// Retorna o primeiro numero elevado ao segundo
void num03() {
    float num1, num2;
    printf("Digite o primeiro valor\n");
    scanf("%f", &num1);
    printf("Digite o segundo valor\n");
    scanf("%f", &num2);

    printf("Numeros: %.2f, %.2f \n", num1, num2);
    printf("Soma: %.2f \n", num1 + num2);
    printf("Produto: %.2f \n", num1 * num2);
    printf("Divisao: %1.2f \n", num1 / num2);
    printf("Subtracao: %.2f \n", num1 - num2);
}

// Converte a temperatura de Fº para Cº
void num04() {
    float fahre;
    printf("Estcreva a temperatura em Fahrenheit: \n");
    scanf("%f", &fahre);
    printf("O valor de %.2f (f) em Celcius eh: %.2f \n", fahre, (fahre-32)/1.8);
}

// Calcula o volume de alguma coisa 3D
void num05() {
    // volume, largura, altura e comprimento
    float v, l, a, c;
    printf("Altura: \n");
    scanf("%f", &a);
    printf("Comprimento: \n");
    scanf("%f", &c);
    printf("Lagura: \n");
    scanf("%f", &l);

    printf("O volume da caixa eh: %.2f\n", a*c*l);
}

void num06() {
    float prest, valor, taxa, tempo;

    printf("Digite o valor da prestacao \n");
    scanf("%f", &valor);
    printf("Digite o valor da taxa \n");
    scanf("%f", &taxa);
    printf("Digite os dias em atraso \n");
    scanf("%f", &tempo);

    printf("O valor corrigido da prestação eh de: \n", valor*(taxa/100)*tempo);
}