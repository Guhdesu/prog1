#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura;

    printf("CALCULADORA DE ÍNDICE DE MASSA CORPORAL\n");
    printf("Olá, insira o valor do seu peso em Kg: ");
    scanf("%f", &peso);
    printf("Olá, insira o valor da sua altura em metros: ");
    scanf("%f", &altura);

    float imc = peso/(altura*altura);

    printf("A valor do seu IMC é de %f", imc);

    return 0;

}