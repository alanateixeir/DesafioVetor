/*Passar os valores do vetorA para o vetorB*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){

    int i, vetorA[N], vetorB[N];

    srand(time(NULL));

    for(i=0;i<N;i++){
        vetorA[i]=rand()%10+1;
        printf("%d\n",vetorA[i]);
    }
    printf("=================\n");

    for(i=N-1;i>-1;i--){
        vetorB[i] = vetorA[i];
        printf("%d\n", vetorB[i]);
    }
}
