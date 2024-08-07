#include <stdio.h>
#include <math.h>

int main() {
    float vpresente, taxaj, periodos;

    printf("CALCULADORA DE VALOR FUTURO\n");
    printf("Qual o valor presente do investimento?: ");
    scanf("%f", &vpresente);
    printf("Qual a taxa de juros?: ");
    scanf("%f", &taxaj);
    printf("Qual o número de períodos?: ");
    scanf("%f", &periodos);
    
    
    float vfuturo = vpresente * pow((1 + taxaj / 100), periodos);

    printf("O valor futuro é: %f", vfuturo);

    return 0;

}