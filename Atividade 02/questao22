#include <stdio.h>
#include <math.h>

int main(){
    float qtd, resultado, valoru, resultadof;
    int cat;
    printf("CATEGORIAS DE PRODUTO\n1 - PRODUTOS DE TECNOLOGIA R$ 150,00 CADA\n2 - PRODUTOS DE ALIMENTAÇÃO R$ 50,00 CADA\n3 - PRODUTOS DE VESTUÁRIO R$ 80,00 CADA\n4 - PRODUTOS DE SAÚDE R$ 120,00 CADA\n5 - PRODUTOS DE LAZER R$ 90,00 CADA\nInforme a categoria que você deseja: ");
    scanf("%d", &cat);
    printf("Qual a quantidade que deseja? ");
    scanf("%f", &qtd);
    switch (cat) {
        case 1:
        valoru = 150;
        resultado = valoru * qtd;
        break;
        
        case 2:
        valoru = 50;
        resultado = valoru * qtd;
        break;
        
        case 3:
        valoru = 80;
        resultado = valoru * qtd;
        break;
        
        case 4:
        valoru = 120;
        resultado = valoru * qtd;
        break;
        
        case 5:
        valoru = 90;
        resultado = valoru * qtd;
        break;
    }
    
    if (qtd >= 1 && qtd <= 5) {
            printf("Parabéns você ganhou um desconto de 5 por cento\n");
            resultadof = resultado*0.95;
            printf("O valor final da compra é %f", resultadof);
    } else {
        if (qtd >= 6 && qtd <= 10) {
            printf("Parabéns você ganhou um desconto de 10 por cento\n");
            resultadof = resultado*0.90;
            printf("O valor final da compra é %f", resultadof);
        } else {
            if (qtd > 10) {
                printf("Parabéns você ganhou um desconto de 10 por cento\n");
            resultadof = resultado*0.85;
            printf("O valor final da compra é %f", resultadof);
            }
        }
    }
        
    return 0;
}
