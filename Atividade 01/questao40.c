#include <stdio.h>
#include <math.h>

int main() {
    float raio, altura;

    printf("CALCULADORA DE VOLUME DO CILINDRO\n");
    printf("Qual a altura do cilindro?: ");
    scanf("%f", &altura);
    printf("Qual o raio do clindro?: ");
    scanf("%f", &raio);

    float volume = 3.14159 * pow(raio, 2) * altura;

    printf("O volume do cilindro é: %f", volume);

    return 0;

}