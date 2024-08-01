#include <stdio.h>
#include <math.h>

int main() {
    float tempf;

    printf("CONVERSOR DE TEMPERATURA FAHRENHEIT P/ CELSIUS\n");
    printf("Olá, informe a temperatura em F°: ");
    scanf("%f", &tempf);

    float tempc = (tempf-32)*5/9;

    printf("A temperatura informada em C° é %2.f", tempc);

    return 0;

}