#include <stdio.h>
#include <math.h>

int main() {
    float taxajn, nperiodoa;

    printf("CALCULADORA DE TAXA DE JUROS EFETIVA ANUAL\n");
    printf("Qual a taxa de juros nominal?: ");
    scanf("%f", &taxajn);
    printf("Qual o número de períodos por ano?: ");
    scanf("%f", &nperiodoa);
    
    float taxaje = pow(1 + taxajn / nperiodoa, nperiodoa) - 1;

    printf("A taxa de juros efetiva anual é: %f", taxaje);

    return 0;

}