#include <stdio.h>
#include <math.h>

int main() {
    float vinicial, vresidual, vida;

    printf("CALCULADORA DE TAXA DE DEPRECIAÇÃO ANUAL\n");
    printf("Qual o valor inicial?: ");
    scanf("%f", &vinicial);
    printf("Qual o valor residual?: ");
    scanf("%f", &vresidual);
    printf("Qual a vida útil?: ");
    scanf("%f", &vida);
    
    
    float depanual = (vinicial - vresidual)/vida;

    printf("A taxa de depreciação anual é: %f", depanual);

    return 0;

}