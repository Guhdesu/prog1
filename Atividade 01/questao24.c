#include <stdio.h>
#include <math.h>

int main() {
    float massa, aceleracao;

    printf("CALCULADORA DE FORÇA RESULTANTE\n");
    printf("Qual a massa do objeto?: ");
    scanf("%f", &massa);
    printf("Qual a aceleracao do objeto?: ");
    scanf("%f", &aceleracao);

    float forca = massa*aceleracao;

    printf("A força resultante agindo sobre o objeto é %f", forca);

    return 0;

}