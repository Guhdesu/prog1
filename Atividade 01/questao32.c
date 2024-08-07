#include <stdio.h>
#include <math.h>

int main() {
    float pinicial, pfinal, anos;

    printf("CALCULADORA DE TAXA DE CRESCIMENTO POPULACIONAL\n");
    printf("Qual a população inicial?: ");
    scanf("%f", &pinicial);
    printf("Qual a população final?: ");
    scanf("%f", &pfinal);
    printf("Quantos anos se passaram?: ");
    scanf("%f", &anos);
    
    
    float cres = ((pfinal - pinicial)/ pinicial)*100/anos;

    printf("A taxa de crescimento é: %f", cres);

    return 0;

}