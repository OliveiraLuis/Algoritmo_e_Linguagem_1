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
void num07();
void num08();
void num09();
void num10();

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
        case(7):
            printf("Exercicio 07 \n");
            linha();
            num07();
        break;
        case(8):
            printf("Exercicio 08 \n");
            linha();
            num08();
        break;
        case(9):
            printf("Exercicio 09 \n");
            linha();
            num09();
        break;
        case(10):
            printf("Exercicio 10 \n");
            linha();
            num10();
        break;
        default:
            printf("Exercicio não encontrado ou não terminado :) \n");
        break;
    }

    linha();
    return 0;
}

void linha() {
    printf("------------------------BAZINGA-------------------------\n");
}

// Retorna o resto da divisão de um numero por 2
void num01() {
    int num;

    // Enunciado 
    printf("Enunciado\n");
    printf("Escreva um programa para ler, calcular e escrever a media aritmetica entre dois numeros.\n");
    linha();

    printf("Digite um numero\n");
    scanf("%d", &num);
    printf("O resto da divisão de %d por 2 eh: %d \n", num, num%2);
}

// Retorna o primeiro numero elevado ao segundo
void num02() {
    float num1, num2;

    // Enunciado 
    printf("Enunciado\n");
    printf("Faca um programa para ler dois valores (x e y), calcular e mostrar x elevado a potência de y.\n");
    linha();


    printf("Digite o primeiro valor\n");
    scanf("%f", &num1);
    printf("Digite o segundo valor\n");
    scanf("%f", &num2);

    printf("O valor %.2f elevado a %.2f eh: %.2f\n", num1, num2,  pow(num1, num2));
}

// Retorna o primeiro numero elevado ao segundo
void num03() {
    float num1, num2;

    // Enunciado 
    printf("Enunciado\n");
    printf("Faca um programa que leia dois numeros reais e em seguida mostre: a soma, o produto, a divisao e a subtracao entre eles.\n");
    linha();

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

    // Enunciado 
    printf("Enunciado\n");
    printf("Faca um programa no qual o usuario fornece os valores de temperatura em Fahrenheit e o mesmo converte os valores para Celsius Apresente o resultado.\n");
    linha();

    printf("Estcreva a temperatura em Fahrenheit: \n");
    scanf("%f", &fahre);
    printf("O valor de %.2f (f) em Celcius eh: %.2f \n", fahre, (fahre-32)/1.8);
}

// Calcula o volume de alguma coisa 3D
void num05() {
    // volume, largura, altura e comprimento
    float v, l, a, c;

    // Enunciado 
    printf("Enunciado\n");
    printf("Elaborar um programa que calcule e apresente o volume de uma caixa retangular.\n");
    linha();

    printf("Altura: \n");
    scanf("%f", &a);
    printf("Comprimento: \n");
    scanf("%f", &c);
    printf("Lagura: \n");
    scanf("%f", &l);

    printf("O volume da caixa eh: %.2f\n", a*c*l);
}

// Calcula o juros
void num06() {
    float prest, valor, taxa, tempo;

    // Enunciado 
    printf("Enunciado\n");
    printf("Elaborar um programa para efetuar o cálculo do valor de uma prestação em atraso.\n");
    linha();

    printf("Digite o valor da prestacao \n");
    scanf("%f", &valor);
    printf("Digite o valor da taxa \n");
    scanf("%f", &taxa);
    printf("Digite os dias em atraso \n");
    scanf("%f", &tempo);

    printf("O valor corrigido da prestação eh de: %.2f\n", valor*(taxa/100)*tempo);
}

// Calcula a área do quadrado
void num07() {
    int lado;

    // Enunciado 
    printf("Enunciado\n");
    printf("Faca um programa para ler um valor (o lado de um quadrado), calcular e mostrar a respectiva area do quadrado.\n");
    linha();

    printf("Digite o valor do lado do quadrado: \n");
    scanf("%d", &lado);
    printf("O valor da area do quadrado eh: %d\n", lado*lado);
}

// Calcula a área do triângulo
void num08() {
    int base, altura;

    // Enunciado 
    printf("Enunciado\n");
    printf("Escreva um programa que peça os valores da base e da altura e forneça a area do triangulo.\n");
    linha();

    printf("Digite a base: \n");
    scanf("%d", &base);
    printf("Digite a altura: \n");
    scanf("%d", &altura);

    printf("A area do triangulo eh: %.2f\n", base*altura/2.0);
}

// Calcula o volume do cilindro
void num09() {
    int altura, raio;

    // Enunciado 
    printf("Enunciado\n");
    printf("Faça um programa para ler dois valores (altura e raio de um cilindro), calcular e mostrar o respectivo volume do cilindro. \n");
    linha();

    printf("Digite a raio: \n");
    scanf("%d", &raio);
    printf("Digite a altura: \n");
    scanf("%d", &altura);

    printf("O volume do cilindro eh: %.2f \n", M_PI*pow(raio, 2)*altura);
}

// Calcula a média ponderada de 2 valores
void num10() {
    float nota1, nota2, peso1, peso2, media;

    // Enunciado 
    printf("Enunciado\n");
    printf("Escrever um programa para ler 4 valores, calcular e mostrar a media ponderada obtida por um aluno para 2 notas bimestrais.\n");
    linha();

    printf("Digite a nota 1: \n");
    scanf("%f", &nota1);
    printf("Digite a nota 2: \n");
    scanf("%f", &nota2);
    printf("Digite a peso 1: \n");
    scanf("%f", &peso1);
    printf("Digite a peso 2: \n");
    scanf("%f", &peso2);

    media = (nota1*peso1 + nota2*peso2)/(peso1+peso2);
    printf("A media ponderada dos valores eh: %.2f\n", media);
}

