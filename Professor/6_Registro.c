#include <stdio.h>
#include <stdlib.h>

int main(){

    struct biblioteca{
        char autor[50];
        char livro[50];
        int ano;
        float valor;
    };
    
    struct biblioteca livro[2];

    printf("Digite o Nome do Autor 1: ");
    scanf("%[^\n]%*c", livro[0].autor);

    printf("Digite o Nome do livro 1: ");
    scanf("%[^\n]%*c", livro[0].livro);

    printf("Digite o Ano de lancamento do livro 1: ");
    scanf("%d", &livro[0].ano);

    printf("Digite o valor do livro: ");
    scanf("%f", &livro[0].valor);

    printf("Autor: %s\n", livro[0].autor);
    printf("Nome do livro: %s\n", livro[0].livro);
    printf("Ano de lancamento: %d\n", livro[0].ano);
    printf("Valor do livro: R$ %.2f\n", livro[0].valor);



    system("Pause");
    return 0;
}