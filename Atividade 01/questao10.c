#include <stdio.h>
#include <math.h>

int main() {
    float kg;

    printf("CONVERSOR QUILOGRAMAS P/ LIBRAS\n");
    printf("Olá, informe a massa em Kg: ");
    scanf("%f", &kg);

    float libras = kg*2.20462;

    printf("A massa em libras é %f", libras);

    return 0;

}