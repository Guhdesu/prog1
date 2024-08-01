#include <stdio.h>
#include <math.h>

int main() {
    float forca, area;

    printf("CALCULADORA DE PRESSÃO\n");
    printf("Olá, insira a força aplicada em N: ");
    scanf("%f", &forca);
    printf("Olá, insira a área em metros quadrados: ");
    scanf("%f", &area);

    float pressao= forca / area;

    printf("A pressão aplicada foi de %f", pressao);

    return 0;

}