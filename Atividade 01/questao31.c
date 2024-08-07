#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2, n3, p1, p2, p3;

    printf("CALCULADORA DE MÉDIA PONDERADA\n");
    printf("Qual a nota 1?: ");
    scanf("%f", &n1);
    printf("Qual a nota 2?: ");
    scanf("%f", &n2);
    printf("Qual a nota 3?: ");
    scanf("%f", &n3);
    printf("Qual o peso da nota 1?: ");
    scanf("%f", &p1);
    printf("Qual o peso da nota 2?: ");
    scanf("%f", &p2);
    printf("Qual o peso da nota 3?: ");
    scanf("%f", &p3);

    float mediapon = (n1 * p1 + n2 * p2 + n3 * p3)/(p1 + p2 + p3);

    printf("A média ponderada é: %f", mediapon);

    return 0;

}