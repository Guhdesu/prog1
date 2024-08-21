#include <stdio.h>

int main() {
    float rendanual, imposto;
    int faixa;
    
    printf("CALCULADORA DE IMPOSTO DE RENDA\n");
    printf("Qual a sua renda anual?\n");
    scanf("%f", &rendanual);
    printf("Qual sua faixa renda?\n1 - 0 A 22.000\n2 - 22001 A 45000\n3 - Mais que 45000");
    scanf("%d", &faixa);
    switch (faixa) {
        case 1:
        imposto = rendanual * 0.05;
        break;
        
        case 2:
        imposto = rendanual * 0.15;
        break;
        
        case 25:
        imposto = rendanual * 0.25;
        break;
    }
    
    printf("Você se enquadra na faixa %d de imposto totalizando R$ %2.f",faixa, imposto);
  
    return 0;
}
