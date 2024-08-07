#include <stdio.h>
#include <math.h>

int main() {
    float vfuturo, taxaj, periodos;

    printf("CALCULADORA DE VALOR PRESENTE\n");
    printf("Qual o valor futuro do investimento?: ");
    scanf("%f", &vfuturo);
    printf("Qual a taxa de juros?: ");
    scanf("%f", &taxaj);
    printf("Qual o número de períodos?: ");
    scanf("%f", &periodos);
    
    
    float vpresente = vfuturo/pow((1 + taxaj/100), periodos);

    printf("O valor presente é: %f", vpresente);

    return 0;

}