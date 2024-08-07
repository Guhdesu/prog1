#include <stdio.h>
#include <math.h>

int main() {
    float raio, altura;

    printf("CALCULADORA DE VOLUME DO CONE\n");
    printf("Qual o raio da base?: ");
    scanf("%f", &raio);
    printf("Qual a altura do cone?: ");
    scanf("%f", &altura);

    float volume = (0.3333) * 3.14 * pow(raio, 2) * altura;

    printf("O volume do cone é: %f", volume);

    return 0;

}