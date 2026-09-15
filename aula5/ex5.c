/*Faça uma função que pesquisa se um valor fornecido pelo usuário 
encontra-se em um vetor de números reais de 20 posições. 
A função main deverá fazer a leitura do vetor e do número a ser pesquisado e passar ambos como parâmetro para a nova função. 
A nova função deverá imprimir se o número existe ou não no vetor.*/

#include<stdio.h>
#include<stdlib.h>


void search(float vet[],float num)
{
    int i,encontrou = 0;
    
    for ( i = 0; i < 20; i++)
    {
        printf(" %.0f",vet[i]);
        if (vet[i] == num)
        {
            encontrou=1;
        }
    }
    if (encontrou == 1)
    {
        printf("\nNumero encontrado!\n");
    }
    else
    {
        printf("\nNumero nao encontrado!\n");
    }   
}

int main()
{
    int i;
    float vet[20], num;

    printf("\nDigite o numero a ser procurado: \n");
    scanf("%f",&num);

    for ( i = 0; i < 20; i++)
    {
        vet[i]= rand() %20;
    }
    
    search(vet,num);    
}