#include <stdio.h>
#include <math.h>

int main() {
    float valorInicial, taxa, tempo;

    printf("CALCULADORA DE JUROS COMPOSTOS\n");

    printf("Insira o valor inicial do investimento: \n");
    scanf("%f", &valorInicial);

    printf("Insira a taxa anual do investimento: \n");
    scanf("%f", &taxa);

    printf("Insira o tempo do investimento em anos: \n");
    scanf("%f", &tempo);
    
    float montante = valorInicial*pow((1+taxa/100), tempo);

    printf("O montante ao final do período de %f anos será de: %f", tempo, montante);

    return 0;

}
