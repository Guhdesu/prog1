#include <stdio.h>
#include <math.h>

int main() {
    float valor, pdesc;

    printf("CALCULADORA DE DESCONTO\n");
    printf("Qual o valor do produto?: ");
    scanf("%f", &valor);
    printf("Qual o porcentagem de desconto?: ");
    scanf("%f", &pdesc);
    
    float pfinal = valor * (1 - pdesc/100);

    printf("A preço final é: %f", pfinal);

    return 0;

}