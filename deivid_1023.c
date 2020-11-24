#include <stdio.h>

int main()
{
    int N, X, Y, i, serial = 1, somaX, somaY, j;
    int total_1, total_2, dif;

    while(scanf("%d", &N) != 0){
        somaX = 0, somaY = 0;
        int Residente[210] = {0};

        if(N == 0){
            break;
        }
        for(i = 0; i < N; i++){
            scanf("%d %d", &X, &Y);


            somaX += X;
            somaY += Y;


            Residente[Y/X] += X;
        }

        printf("Cidade# %d:\n", serial);
        serial++;
        j = 0;

        for(i = 0; i < 210; i++){
            if(Residente[i] > 0){
                if (j > 0){
                    printf(" ");
                }
                j++;
                printf("%d-%d", Residente[i], i);
            }
        }
        printf("\n");

        total_1 = (double)somaY / (double)somaX * 100;
        total_2 = (double)somaY / (double)somaX;
        total_2 = total_2 * 100;
        dif = total_1 - total_2;
        total_1 = total_1 / 100;

        printf("Consumo medio: %d.%02d m3.\n", total_1, dif);
    }

    return 0;
}
