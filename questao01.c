#include <stdio.h>

int main() {
    int a,b;

    printf("Olá, insira o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Olá, insira o segundo número inteiro: ");
    scanf("%d", &b);
    
    int soma = a + b;

    printf("A soma entre os dois números informados é %d", soma);

}