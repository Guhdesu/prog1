#include <stdio.h>
#include <math.h>

int main() {
    float c1,c2;

    printf("Olá, insira o comprimento do primeiro cateto: ");
    scanf("%f", &c1);

    printf("Olá, insira o comprimento do segundo cateto: ");
    scanf("%f", &c2);
    
    float hipotenusa = sqrt(c1*c1+c2*c1);

    printf("A hipotenusa é %f", hipotenusa);

    return 0;

}