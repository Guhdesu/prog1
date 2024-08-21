#include <stdio.h>
#include <stdlib.h>

int main() {
    float horas, vf;
    
    printf("O veículo ficou estacionado por quantas horas? ");
    scanf("%f", &horas);
    
    if (horas <=2) {
        vf = horas * 5;
        printf("O valor de estacionamento a ser pago é de R$ %f ", vf);
    } else if (horas > 2 && horas <= 5) {
        vf = horas * 3;
        printf("O valor de estacionamento a ser pago é de R$ %f ", vf);
    } else {
        vf = horas * 2;
        printf("O valor de estacionamento a ser pago é de R$ %f ", vf);
    }
    
    return 0;
}
