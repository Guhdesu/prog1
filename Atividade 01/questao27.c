#include <stdio.h>
#include <math.h>

int main() {
    float aresta;

    printf("CALCULADORA DO VOLUME DO CUBO\n");
    printf("Qual a aresta do cubo?: ");
    scanf("%f", &aresta);

    float volume = pow(aresta, 3);

    printf("O volume do cubo é: %f", volume);

    return 0;

}