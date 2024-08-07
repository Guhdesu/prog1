#include <stdio.h>
#include <math.h>

int main() {
    float raio;

    printf("CALCULADORA DE VOLUME DA ESFERA\n");
    printf("Qual o raio da esfera?: ");
    scanf("%f", &raio);

    float volume = 1.33 * 3.14 * pow(raio, 3);

    printf("O volume da esfera é: %f", volume);

    return 0;

}