#include <stdio.h>

int main() {
    float altura, base;

    printf("Olá, insira a altura do triângulo: ");
    scanf("%f", &altura);

    printf("Olá, insira a medida da base do triângulo: ");
    scanf("%f", &base);
    
    float area = (altura*base)/2;

    printf("A área do triângulo é %2.f", area);

    return 0;

}