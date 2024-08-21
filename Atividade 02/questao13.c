#include <stdio.h>
#include <string.h>

int main() {
    float a, b;
    char op;
    float resultado;

    printf("Digite o número A: ");
    scanf("%f", &a);
    printf("Digite o número B: ");
    scanf("%f", &b);
    printf("+ Adição\n- Subtração\n* Multiplicação\n/ Divisão\nInsira o símbolo da operação que deseja: ");
    scanf(" %c", &op);
    
    switch (op) {
        case '+':
        resultado = a + b;
        printf("O resultado é %2.f", resultado);
        break;
        
        case '-':
        resultado = a - b;
        printf("O resultado é %2.f", resultado);
        break;
        
        case '*':
        resultado = a * b;
        printf("O resultado é %2.f", resultado);
        break;
        
        case '/':
        resultado = a / b;
        printf("O resultado é %2.f", resultado);
        break;
    }

    return 0;
}
