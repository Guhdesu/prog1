#include <stdio.h>
#include <math.h>

int main() {
    float valorInicial, taxa;
    int tempo;

    printf("CALCULADORA DE JUROS SIMPLES\n");

    printf("Insira o valor inicial do investimento: \n");
    scanf("%f", &valorInicial);

    printf("Insira a taxa anual do investimento: \n");
    scanf("%f", &taxa);

    printf("Insira o tempo do investimento em anos: \n");
    scanf("%d", &tempo);
    
    float montante = valorInicial*(taxa/100)*tempo;

    printf("O montante em juros simples ao final do período de %d anos será de: %f", tempo, montante);

    return 0;

}