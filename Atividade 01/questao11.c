#include <stdio.h>
#include <math.h>

int main() {
    float m;

    printf("CONVERSOR DE METROS P/ PÉS\n");
    printf("Olá, informe a distância em metros: ");
    scanf("%f", &m);

    float p = m*3.28084;

    printf("A distância em pés é %f", p);

    return 0;

}