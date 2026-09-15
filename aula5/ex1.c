//1) Crie uma função que leia um vetor de inteiros de 10 posições e depois apresente este vetor em ordem inversa na tela.

#include<stdio.h>

void turnVet(int tam)
{
    int i,j,vet[tam],vetInv[tam];
    printf("\n______________________\n");
    printf("\nInsere vetor.\n");
    
    for ( i = 0; i < tam; i++)
    {
        printf("Digite valor %i: ",i);
        scanf("%i",&vet[i]);
    }
    printf("\n______________________\n");
    printf("\nVetor inverso\n");
    printf("vet[");
    for ( j = 0; j < tam; j++)
    {
        vetInv[j]=vet[tam-1-j];
        printf(" %i",vetInv[j]);
    }
    printf("]");
}

int main()
{
    int const T = 10;

    turnVet(T);
}