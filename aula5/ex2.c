/*2) 
Faça um programa para identificar o menor valor contido em um vetor. 
Para isso, crie duas funções: 
uma função chamada leitura que lê um vetor de tamanho não determinado, 
e uma função chamada menor que recebe um vetor de inteiros, já preenchido, e o seu tamanho. 
A função menor deve retornar o menor dos elementos contidos dentro do vetor. 
A função de leitura deve permitir que vetores de tamanhos variados sejam lidos.*/

#include<stdio.h>

void readVet(int vet[],int tam);
int menor(int vet[],int tam);

int main()
{
    
    int tam;
    
    printf("Digite o tamanho do vetor que deseja:");
    scanf("%i",&tam);
    
    int vet[tam];

    readVet(vet,tam);
    printf("\nMenor valor: %d",menor(vet,tam));
}

void readVet(int vet[],int tam)
{
    int i;
    for ( i = 0; i < tam; i++)
    {
        printf("Digite valor: ");
        scanf("%i",&vet[i]);
    }
}

int menor(int vet[],int tam)
{
    int i,menor;
    menor = vet[0];
   
    for ( i = 1; i < tam; i++)
    {
    
        if (vet[i]< menor)
        {
            menor = vet[i];
        }   
    }
    return menor;
}