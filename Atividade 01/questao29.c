#include <stdio.h>
#include <math.h>

int main() {
    float raio, altura;

    printf("CALCULADORA DE VOLUME DO CILINDRO\n");
    printf("Qual o raio da base?: ");
    scanf("%f", &raio);
    printf("Qual a altura do clindro?: ");
    scanf("%f", &altura);

    float volume = 3.14 * pow(raio, 2) * altura;

    printf("O volume do cilindro é: %f", volume);

    return 0;

}