#include <stdio.h>
#include <math.h>

int main() {
    float milhas;

    printf("CONVERSOR DE MILHAS P/ QUILÔMETROS\n");
    printf("Olá, insira a distância em milhas: ");
    scanf("%f", &milhas);

    float km = milhas/0.621371;

    printf("A distância em Km é %f", km);

    return 0;

}