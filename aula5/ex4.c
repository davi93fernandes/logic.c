/*4) Escreva um programa que leia um vetor de números inteiros e 
identifique se há maior quantidade de números pares ou de ímpares. 
Para isso, crie uma função que recebe o vetor já preenchido e 
retorna 1 se existe maior quantidade de pares ou 0 se a maior quantidade for de ímpares.*/

#include<stdio.h>

int parImpar(int vet[], int t);

int main()
{
    const int TAM = 5;
    int i;
    int vet[TAM];
    printf("\nVerificação maiores impar = 0 / par = 1.\n");
    printf("____________________________________\n\n");
    for ( i = 0; i < TAM; i++)
    {
        printf("Digite inteiro: ");
        scanf("%i",&vet[i]);
    }
    if (parImpar(vet,TAM) == 1)
    {
        printf("\nResultado eh %i, os pares sao maiores.", parImpar(vet,TAM));
    }
    else
    {
        printf("\nResultado eh %i, os impares sao maiores.", parImpar(vet,TAM));
    }
    printf("\n____________________________________\n\n");
}

int parImpar(int vet[],int t)
{
    int i, contI=0,contP=0,maior;
    for ( i = 0; i < t; i++)
    {
        if (vet[i] %2 == 0)
        {
            contP++;
        }
        else
        {
            contI++;
        }
    }
    if (contI > contP)
    {
        maior=0;
    }
    else
    {
        maior=1;
    }
    return maior;    
}