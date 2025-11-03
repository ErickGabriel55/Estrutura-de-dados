#include <stdio.h>
#include <stdlib.h>
/*Diferentemente das variaveis comuns que quando acaba a execução daquela variavel a memoria é liberada, já na alocação dinamica continuará alocado, ou seja, é necessário serr liberada manualmente com a função free() usando o ponteiro que onde o */
void escrever(int *numeros, int n){
    int i;
    printf("Numeros lidos: ");
    for(i = 0; i < n; i++){
        printf("%d, ", numeros[i]);
        printf("\n");
    }
}

int main(){

    int *numeros;
    int n, i;

    printf("Quantidade de numeros: ");
    scanf("%d", &n);
    
    numeros = malloc(n * sizeof(int));

    if(numeros == NULL){
        printf("Erro na alocação de memória!\n Encerrando programa...\n");
        exit(1);
    }

    for(i = 0; i < n; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    system("Pause");
    return 0;
}