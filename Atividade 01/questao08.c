#include <stdio.h>
#include <math.h>

int main() {
    float tempc;

    printf("CONVERSOR DE TEMPERATURA CELSIUS P/ FAHRENHEIT\n");
    printf("Olá, informe a temperatura em C°: ");
    scanf("%f", &tempc);

    float tempf = (tempc*9/5)+32;

    printf("A temperatura informada em F° é %2.f", tempf);

    return 0;

}