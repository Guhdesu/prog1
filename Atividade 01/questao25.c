#include <stdio.h>
#include <math.h>

int main() {
    float distancia, forca;

    printf("CALCULADORA DE TRABALHO\n");
    printf("Qual a distância percorrida pelo objeto?: ");
    scanf("%f", &distancia);
    printf("Qual a força aplicada no objeto?: ");
    scanf("%f", &forca);

    float trabalho = forca * distancia;

    printf("O trabalho é %f", trabalho);

    return 0;

}