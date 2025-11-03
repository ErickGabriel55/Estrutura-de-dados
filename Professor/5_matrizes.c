#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota[2][3];

    nota[0][0] = 6;
    nota[0][1] = 5;
    nota[0][2] = 4;

    nota[1][0] = 5;
    nota[1][1] = 8;
    nota[1][2] = 9;

    printf("Nota 1: %d \n",  nota[0][0]);
    printf("Nota 2: %d \n",  nota[0][1]);
    printf("Nota 3: %d \n",  nota[0][2]);

    printf("Nota 4: %d \n",  nota[1][0]);
    printf("Nota 5: %d \n",  nota[1][1]);
    printf("Nota 6: %d \n",  nota[1][2]);
    system("Pause");
    return 0;
}