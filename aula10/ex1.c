#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void geraRand(int inicio, int fim)
{
    int i;
    for ( i = inicio; i <= fim; i++)
    {
        printf(" %d", rand() %(fim - inicio +1) + inicio); 
    }    

}


int main()
{

    srand(time(NULL));

    int init, end;

    printf("Digite a faixa de valores, inicio e fim para numeros aleatorios\n");
    scanf("%d%d",&init, &end);

    geraRand(init, end);

    return 0;
}