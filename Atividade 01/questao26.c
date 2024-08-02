#include <stdio.h>
#include <math.h>

int main() {
    float trabalho, tempo;

    printf("CALCULADORA DE POTÊNCIA\n");
    printf("Qual a trabalho realizado?: ");
    scanf("%f", &trabalho);
    printf("Qual o tempo gasto?: ");
    scanf("%f", &tempo);

    float potencia = trabalho/tempo;

    printf("A potência é %f", potencia);

    return 0;

}