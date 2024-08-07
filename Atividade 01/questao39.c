#include <stdio.h>
#include <math.h>

int main() {
    float lados, medida;

    printf("CALCULADORA DE PERÍMETRO POLIGONAL\n");
    printf("Qual o número de lados do polígono?: ");
    scanf("%f", &lados);
    printf("Qual a medida dos lados do polígono?: ");
    scanf("%f", &medida);
    
    float perimetro = lados * medida;

    printf("O perímetro do polígono é: %f", perimetro);

    return 0;

}