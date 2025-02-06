#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // Declaração de Variáveis
    int x;
    char letra;
    char nome[20];
    float altura;
    double valor;

    x = 10;
    letra = 'A';
    strcpy(nome, "joão");
    altura = 1.8346;
    valor = 15.729546468;


    printf("O valor de x e: %d\n", x);
    printf("A letra e: %c\n", letra);
    printf("O nome e %s\n", nome);
    printf("A altura e: %.2f\n", altura);
    printf("O valor e: %.3f\n", valor);
    printf("Digite um novo valor inteiro para x: ");
    scanf("%d", &x);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    printf("Digite uma nome (max. 19 caracteres): ");
    scanf("%s", nome);
    printf("Digite sua altura (ex. 1.75): ");
    scanf("%s", &altura);
    printf("Digite um valor decimal (ex: 15.729): ");
    scanf("%s", &valor);
     printf("Digite um valor decimal (ex: 15.729): ");
    scanf("%s", &valor);
    printf("O valor de x e: %d\n", x);
    printf("A letra e: %c\n", letra);
    printf("O nome e: %s\n", nome);
    printf("A altura e: %.2f\n", altura);
    printf("O valor e: %.3f\n", valor);
    system("Pause");
    return 0;
}