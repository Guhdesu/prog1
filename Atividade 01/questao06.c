#include <stdio.h>
#include <math.h>

int main() {
    float raio;

    printf("CALCULADORA DE ÁREA DO CÍRCULO\n");
    printf("Olá, insira o raio do círculo: ");
    scanf("%f", &raio);

    float area = M_PI*raio*raio;

    printf("A área do círculo é %f", area);

    return 0;

}