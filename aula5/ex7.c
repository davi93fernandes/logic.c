/* Construa um programa que, após ler 12 valores reais para uma matriz 4x3, 
chama uma função para somar todos os seus elementos e outra para imprimir a matriz. 
A função de soma deve receber a matriz como parâmetro e retornar o somatório. 
A função de impressão deve receber a matriz como parâmetro. 
Ao final, o programa principal deve imprimir o somatório dos elementos da matriz.*/

#include<stdio.h>

float soma(float mat[4][3]);
void printMat(float mat[4][3]);

int main()
{
    const int L = 4;
    const int C = 3;
    int l,c;
    float mat[L][C];

    for ( l = 0; l < L; l++)
    {
        for ( c = 0; c < C; c++)
        {
            printf("Digite o [%i][%i]:",l,c);
            scanf("%f",&mat[l][c]);
        }
    }
    printMat(mat);
    printf("\nSomatorio da matriz: %.2f\n",soma(mat));    
}

float soma(float mat[4][3])
{
    int l,c;
    float acm=0;   
    
    for ( l = 0; l < 4; l++)
    {
        for ( c = 0; c < 3; c++)
        {
            acm=acm+mat[l][c];
        }
    }
    return acm;
}

void printMat(float mat[4][3])
{
    int l,c;
    
    printf("\nM A T R I Z\n\n");
    for ( l = 0; l < 4; l++)
    {
        for ( c = 0; c < 3; c++)
        {
            printf("%.2f\t",mat[l][c]);
        }
        printf("\n");
    }
    
}