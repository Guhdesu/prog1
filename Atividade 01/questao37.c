#include <stdio.h>
#include <math.h>

int main() {
    float dmaior, dmenor;

    printf("CALCULADORA DA ÁREA DO LOSANGO\n");
    printf("Qual o valor da diagonal maior?: ");
    scanf("%f", &dmaior);
    printf("Qual o valor da diagonal menor?: ");
    scanf("%f", &dmenor);
    
    float area = (dmaior * dmenor)/2;

    printf("A área do losango é: %f", area);

    return 0;

}