#include <stdio.h>
#include <math.h>

int main() {
    float massa, velocidade;

    printf("CALCULADORA DE ENERGIA CINÉTICA\n");
    printf("Qual a massa do objeto?: ");
    scanf("%f", &massa);
    printf("Qual a velocidade do objeto?: ");
    scanf("%f", &velocidade);

    float ec = (massa*pow(velocidade,2))/2;

    printf("A energia cinética do objeto é %f", ec);

    return 0;

}