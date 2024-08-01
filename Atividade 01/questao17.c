#include <stdio.h>
#include <math.h>

int main() {
    float massa, vol;

    printf("CALCULADORA DE DENSIDADE\n");
    printf("Olá, insira o valor da massa do objeto: ");
    scanf("%f", &massa);
    printf("Olá, insira o valor do volume do objeto: ");
    scanf("%f", &vol);

    float den = massa/vol;

    printf("A valor da densidade do objeto é %f", den);

    return 0;

}