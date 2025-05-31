#include <stdio.h>

int main(){

int tabuleiro [10] [10];
int naviohorinzontal [3];
int naviovertical [3];

for(int i = 0;i < 10;i++)
{
    for(int j = 0;j < 10;j++)
    {
        tabuleiro [i] [j] = 0;
    }
}

naviohorinzontal [0] = 0;
naviohorinzontal[1] = 1;
naviohorinzontal[2] = 2;

for(int i = 0;i < 3;i++){
    tabuleiro[2] [naviohorinzontal[i]] = 3;
}

naviovertical[0] = 7;
naviovertical[1] = 8;
naviovertical[2] = 9;

for (int i = 0; i < 3; i++) {
    tabuleiro[naviovertical[i]][7] = 3;
}

printf("Tabuleiro de Batalha Naval:\n");
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}

printf("\n");

return 0;
}