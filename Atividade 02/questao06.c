#include <stdio.h>

int main(){
    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    if (n >= 1 && n <=100) {
        printf("%d está entre 1 e 100.", n);
    } else {
        printf("%d  não está entre 1 e 100.", n);
    }
    return 0;
}
