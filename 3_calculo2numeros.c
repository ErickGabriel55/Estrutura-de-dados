#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para y: ");
    scanf("%d", &y);

    printf("O produto e: %d\n", x * y);
    printf("A soma e: %d\n", x + y);
    printf("A subtracao e: %d\n", x - y);
    printf("A divisao e: %d\n", x / y);

    system("Pause");
    return 0;
}