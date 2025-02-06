#include <stdio.h>
#include <stdlib.h>

#define tamanho 5

struct tpilha{
    int dados[tamanho];
    int ini;
    int fim;
};


struct  tpilha pilha;
int op;

void pilha_mostrar(){
    printf("[");

    for (int i = 0; i < tamanho; i++){
        printf("%d, ", pilha.dados[i]);
    }
    printf("]\n");
}

void pilha_entrar(){
    if (pilha.fim == tamanho){
        printf("\nA pilha está cheia, impossível empilhar um novo elemento!\n\n");
        system("pause");
    }
    else{
        printf("\nDigite o valor a ser empilhado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}

void pilha_sair(){
    if (pilha.ini == pilha.fim){
        printf("\nA pilha está vazia, não há nada para desempilhar!\n\n");
        system("pause");
    }
    else{
        pilha.dados[pilha.fim-1] = 0;
        pilha.fim--;
    }
}

void menu_mostrar(){
    printf("\nEscolha uma opcao:\n");
    printf("1 - Empilhar\n");
    printf("2 - Desempilhar\n");
    printf("0 - Sair\n\n");
}


int main(){

    op = 1;
    pilha.ini = 0;
    pilha.fim = 0;

    while (op != 0){
        system("cls");
        printf("Pilha: ");
        pilha_mostrar();
        menu_mostrar();

        scanf("%d", &op);

        switch (op){
            case 1:
                pilha_entrar();
                pilha_entrar();
                break;
            case 2:
                pilha_sair();
                pilha_mostrar();
                break;
        }
    }

    system("Pause");
    return 0;
}