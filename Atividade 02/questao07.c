#include <stdio.h>

int main(){
    int cpd;
    
    printf("TANQUE 500 LITROS: \n");
    printf("Qual o nível de água no tanque? ");
    scanf("%d", &cpd);
    
    if (cpd <200) {
        printf("O nível da água está baixo.");
    } else if (cpd >= 200 && cpd < 400) {
        printf("O nível da água está médio.");
    } else if (cpd >= 400) {
        printf("O nível da água está alto.");
    }
    return 0;
}
