#include <stdio.h>
#include <stdlib.h>

void display(int variavel, int *ptr);
void update(int *p);

int main(){
    // Armazena endereço de outra variável (int *p = &x;)
    // *p Acessa o valor
    // &x Obtém o endereço
    int variavel = 15;
    int *ptr;
    ptr = &variavel;
    display(variavel, ptr);

    printf("\n\n");

    update(&variavel);
    display(variavel, ptr);


    system("Pause");
    return 0;
}

void display(int variavel, int *ptr)
{
    printf("\n\n");
    printf("O conteudo de var e: %d\n", variavel);
    printf("O endereco de var e: %p\n", &variavel);
    printf("O conteudo apontado pelo ponteiro: %d\n", *ptr);
    printf("O endereco apontado pelo ponteiro: %p\n", ptr);
    printf("O endereco do ponteiro e: %p\n", &ptr);
}

void update(int *p)
{
    *p = *p + 1;
}