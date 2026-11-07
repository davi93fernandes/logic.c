#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int geraRand(int init, int fim, int qt, int *val_procurado);


int main()
{
    srand(time(NULL));
    int inicio,fim,qt;
    int vezes_q_Apareceu, valor_Procurado;
    
    printf("Digite o inicio para contagem de aleatorios:\n");
    scanf("%d",&inicio);

    printf("Digite o fim para contagem de aleatorios:\n");
    scanf("%d",&fim);
    
    printf("Digite a quantidade a ser impressa:\n");
    scanf("%d",&qt);
    vezes_q_Apareceu = geraRand(inicio,fim,qt,&valor_Procurado);

    if (vezes_q_Apareceu == 0)
    {
        printf("\nO valor %d nao foi encontrado na geracao de aleatorios!\n",valor_Procurado);
    }
    else
    {
        printf("\nO valor %d foi encontrado %d vezes nos aleatorios!\n",valor_Procurado,vezes_q_Apareceu);
    }

    return 0;
}

int geraRand(int init, int fim, int qt, int *val_procurado)
{
    int i,num;
    int cont = 0;

    printf("Digite o valor a ser procurado nos aleatorios:\n");
    scanf("%d", val_procurado);

    for ( i = 0; i < qt; i++)
    {
        num = rand() %(fim - init +1) +init;
        if( num == *val_procurado)
        {
            cont++;
        }
    }
    return cont;
    
}