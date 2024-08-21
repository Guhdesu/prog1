#include <stdio.h>
int main(){
    int idade;
    
    printf("Olá, qual a sua idade? ");
    scanf("%d", &idade);
    if (idade >=18) {
        printf("Você está apto para votar.");
    } else {
        printf("Você não está apto para votar.");
    }
    return 0;
}
