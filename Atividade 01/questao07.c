#include <stdio.h>
#include <math.h>

int main() {
    float raio;

    printf("CALCULADORA DE PERÍMETRO DO CÍRCULO\n");
    printf("Olá, insira o raio do círculo: ");
    scanf("%f", &raio);

    float perimetro = 2*M_PI*raio;

    printf("A área do círculo é %f", perimetro);

    return 0;

}