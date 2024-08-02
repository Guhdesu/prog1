#include <stdio.h>
#include <math.h>

int main() {
    float km;

    printf("CONVERSOR DE QUILÔMETROS P/ MILHAS\n");
    printf("Olá, insira a distância em Km: ");
    scanf("%f", &km);

    float milhas = 0.621371 * km;

    printf("A distância em milhas é %f", milhas);

    return 0;

}