/*Faça um programa que leia dois vetores, um de 5 e outro de 10 elementos, 
após gere um vetor de 15 elementos, resultado da união destes dois. 
Construa uma função de leitura de vetor 
outra para a criação do vetor com os valores unidos.*/

#include<stdio.h>

void readVet(int vet[],int tam);
void uneVet(int vet1[],int vet2[],int vetRes[],int tam1,int tam2);


int main()
{
    int t1=5;
    int t2=10;
    int vet1[t1], vet2[t2],vetR[t2+t1];

    printf("\n\tDigite o vetor 1\n");
    readVet(vet1,t1);
    printf("\n\tDigite o vetor 2\n");
    readVet(vet2,t2);
    uneVet(vet1,vet2,vetR,t1,t2);
}

void readVet(int vet[],int tam)
{
    int i;
    for ( i = 0; i < tam; i++)
    {
        printf("Digite valor %i do vetor: ", i);
        scanf("%i",&vet[i]);
    }
}

void uneVet(int vet1[],int vet2[],int vetRes[],int tam1,int tam2)
{
    int i,j;
 
    for ( i = 0; i < tam1; i++)
    {
        vetRes[i]=vet1[i];
    }

    for ( j = 0; j < tam2; j++)
    {
        vetRes[tam1+j]=vet2[j];   
    }                     

    printf("\nVetor resultante: [");
    for ( i = 0; i < tam1 + tam2; i++)
    {
        printf(" %i",vetRes[i]);
    }
    printf(" ]\n");
}
