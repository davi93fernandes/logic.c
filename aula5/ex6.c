/*Faça um programa que leia um vetor de inteiros, 
positivos ou negativos, com 8 posições. 
Crie e mostre dois vetores resultantes, 
um contendo somente os números positivos e o outro somente os negativos. 
1 Faça uma função para a leitura do vetor, 
2 para a construção dos vetores de positivos e de negativos e 
3 outra para a ser utilizada na impressão destes dois vetores.*/

#include<stdio.h>

void readVet(int vet[]);
void buildVet(int vet[]);
void printVet(int vet[],int tam);

int main()
{
    int vet[8];
    
    readVet(vet);
    buildVet(vet);
    
}

void readVet(int vet[])
{
    int i;
    printf("\n\nDigite valores positivos e negativos \ndiferentes de zero para vetor de 8 posicoes.\n\n");
    
    
    
    for ( i = 0; i < 8; i++)
    {
        vet[i] = 0;
        while (vet[i] == 0)
        {
            printf("Valor %d:",i+1);
            scanf("%d",&vet[i]);
           
            if (vet[i] == 0)
            {
                printf("Deve ser diferente de zero! Digite outro:");
            }          
        }  
    }
}

void buildVet(int vet[])
{
    int p=0,n=0;
    int i,contN=0,contP=0;
    for ( i = 0; i < 8; i++)
    {
        if (vet[i] > 0)
        {
            contP++;
        }
        else
        {
            contN++;
        }       
    }
    int vetN[contN],vetP[contP];

    for ( i = 0; i < (contP + contN) ; i++)
    {
        if (vet[i] > 0)
        {
            vetP[p]=vet[i];
            p++;
        }
        else
        {
            vetN[n]=vet[i];
            n++;
        }
    }    

    printf("\n ");
    printf("vetor negativos: ");
    printVet(vetN,contN);
    printf("vetor positivos: ");
    printVet(vetP,contP);
}

void printVet(int vet[],int tam)
{
    int i;
    printf(" [ ");
    for ( i = 0; i < tam; i++)
    {
        printf("%d ",vet[i]);
    }
    printf("]\n");
}