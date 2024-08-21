#include <stdio.h>
#include <math.h>

int main() {
    float valor, vfinal;
    
    printf("Qual o valor da compra? ");
    scanf("%f", &valor);
    
    if (valor <=100) {
        vfinal = valor * 0.95;
        printf("Parabéns, você ganhou um desconto de 5 porcento, agora o valor da sua compra é: %4.f", vfinal);
    } else if (valor > 100 && valor <= 500) {
        vfinal = valor * 0.90;
        printf("Parabéns, você ganhou um desconto de 10 porcento, agora o valor da sua compra é: %4.f", vfinal);
    } else {
        vfinal = valor * 0.85;
        printf("Parabéns, você ganhou um desconto de 15 porcento, agora o valor da sua compra é: %4.f", vfinal);
    }

    return 0;
}
