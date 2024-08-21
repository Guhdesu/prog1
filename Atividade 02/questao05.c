#include <stdio.h>

int main(){
    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    if (n % 5 == 0) {
        printf("%d é um número múltiplo de 5.", n);
    } else {
        printf("%d  não é um número múltiplo de 5.", n);
    }
    return 0;
}
