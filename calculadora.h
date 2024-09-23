#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função para exibir o menu principal da calculadora
void Menu() {
    printf("**** Calculadora 'C' ****\n");
    printf("1- Soma\n");
    printf("2- Multiplicação\n");
    printf("3- Divisão\n");
    printf("4- Subtração\n");
    printf("5- Potenciação\n");
    printf("6- Tabuada\n");
    printf("7- Verificar primo\n");
    printf("8- Verificar par\n");
    printf("0- Terminar\n");
    printf("Opção: ");
}

// Função para ler um número
float lerNumber(const char* prompt) {
    float num;
    printf("%s", prompt);
    scanf("%f", &num);
    return num;
}

// Função para realizar a soma de dois números
void soma() {
    float a = lerNumber("Introduza o primeiro número: ");
    float b = lerNumber("Introduza o segundo número: ");
    printf("Resultado: %.2f\n", a + b);
}

// Função para realizar a multiplicação de dois números
void multiplicacao() {
    float a = lerNumber("Introduza o primeiro número: ");
    float b = lerNumber("Introduza o segundo número: ");
    printf("Resultado: %.2f\n", a * b);
}

// Função para realizar a divisão de dois números
void divisao() {
    float a = lerNumber("Introduza o dividendo: ");
    float b = lerNumber("Introduza o divisor: ");
    if (b != 0) {
        printf("Resultado: %.2f\n", a / b);
    } else {
        printf("Erro: Divisão por zero!\n");
    }
}

// Função para realizar a subtração de dois números
void subtracao() {
    float a = lerNumber("Introduza o primeiro número: ");
    float b = lerNumber("Introduza o segundo número: ");
    printf("Resultado: %.2f\n", a - b);
}

// Função para realizar a potenciação
void potenciacao() {
    float base = lerNumber("Introduza a base: ");
    float expoente = lerNumber("Introduza o expoente: ");
    printf("Resultado: %.2f\n", pow(base, expoente));
}

// Função para exibir a tabuada de um número
void tabuada() {
    int num = (int)lerNumber("Introduza um número para a tabuada: ");
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Função para verificar se um número é primo
void verificarPrimo() {
    int num = (int)lerNumber("Introduza um número para verificar se é primo: ");
    int isPrime = 1;
    if (num <= 1) isPrime = 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    printf("%d %s primo.\n", num, isPrime ? "é" : "não é");
}

// Função para verificar se um número é par
void verificarPar() {
    int num = (int)lerNumber("Introduza um número para verificar se é par: ");
    printf("%d é %s.\n", num, num % 2 == 0 ? "par" : "ímpar");
}

// Função para limpar
void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}