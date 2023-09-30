/*Passar os valores de vetor A e vetor B (cada um com 5 posições) para o vetor C (10 posições). De maneira intercalada.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 10

int main(){

    int i, vetorA[N], vetorB[N], vetorC[M];

    srand(time(NULL));


        printf("Vetor a\n");
    for(i=0;i<N;i++){
        vetorA[i]=rand()%10+1;
        printf("%d\n",vetorA[i]);
    }
        printf("=================\n");
        printf("Vetor B\n");

    for(i=0;i<N;i++){
        vetorB[i]=rand()%10+1;
        printf("%d\n",vetorB[i]);
    }
         printf("=================\n");

     for(i=0;i<N;i++){
        vetorC[i] = vetorA[i];
        vetorC[5+i] = vetorB[i];
        printf("%d\n%d\n", vetorC[i],vetorC[5+i]);
     }
}
