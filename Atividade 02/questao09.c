#include <stdio.h>

int main(){
    float nota;
    
    printf("Insira a note do aluno (0 a 100): ");
    scanf("%f", &nota);
    
    if (nota >= 80 && nota <= 100) {
        printf("Nota excelente.");
    } else if (nota >= 60 && nota < 80) {
        printf("Nota boa.");
    } else if (nota >= 40 && nota < 60) {
        printf("Nota suficiente.");
    } else {
        printf("Nota insuficiente");
    }
    return 0;
}
