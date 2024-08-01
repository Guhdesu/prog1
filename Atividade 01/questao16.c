#include <stdio.h>
#include <math.h>

int main() {
    float min;

    printf("CONVERSOR DE MINUTOS P/ SEGUNDOS\n");
    printf("Olá, insira o valor em minutos: ");
    scanf("%f", &min);

    float seg = min*60;

    printf("A o valor em segundos é %f", seg);

    return 0;

}