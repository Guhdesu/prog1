#include <stdio.h>

int main() {
    int a,b,c;

    printf("Olá, insira o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Olá, insira o segundo número inteiro: ");
    scanf("%d", &b);

    printf("Olá, insira o terceiro número inteiro: ");
    scanf("%d", &c);
    
    float media = (a+b+c)/3;

    printf("A média arimética entre os três números informados é %2.f", media);

    return 0;

}