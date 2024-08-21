#include <stdio.h>
#include <math.h>

int main() {
    float altura, peso, imc;

    printf("CALCULADORA DE IMC\n");
    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("Informe o peso: ");
    scanf("%f", &peso);
    
    imc = peso / pow(altura, 2);
    
    if (imc < 18.5) {
        printf("Resultado: abaixo do peso.");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Resultado: peso normal.");
    } else if (imc >= 25 && imc < 30) {
        printf("Resultado: acima do peso.");
    } else {
        printf("Resultado: obesidade.");
    }
    return 0;
}
