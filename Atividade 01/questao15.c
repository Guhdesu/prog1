#include <stdio.h>
#include <math.h>

int main() {
    float hora;

    printf("CONVERSOR DE HORAS P/ MINUTOS\n");
    printf("Olá, insira o valor em horas: ");
    scanf("%f", &hora);

    float min = hora*60;

    printf("A o valor em minutos é %f", min);

    return 0;

}