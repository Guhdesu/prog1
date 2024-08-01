#include <stdio.h>
#include <math.h>

int main() {
    float dist, tempo;

    printf("CALCULADORA DE VELOCIDADE MÉDIA\n");
    printf("Olá, insira a distância percorrida: ");
    scanf("%f", &dist);
    printf("Olá, insira o tempo em que a distância foi percorrida: ");
    scanf("%f", &tempo);

    float vmedia = dist/tempo;

    printf("A velocidade média foi de %f", vmedia);

    return 0;

}