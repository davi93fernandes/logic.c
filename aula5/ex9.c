/*Faça uma função que preencha uma matriz M(2x2), 
calcule e mostre a matriz R, resultante da multiplicação dos elementos de M pelo seu maior elemento. 
O maior valor deve ser identificado em uma função chamada maior, 
que deverá retorná-lo para que seja utilizado na construção da matriz R.

1 funcao preencher
2 funcao de maior
3 funcao de multiplicacao matri r*/

#include<stdio.h>

void preencheMat(int mat[2][2]);
int maior(int mat[2][2]);
void matR(int mat[2][2],int bigger);

int main()
{
    int mat[2][2],bigger;
    printf("\nMatriz\n");
    preencheMat(mat);
    bigger=maior(mat);
    printf("\nMatriz R\n");
    matR(mat,bigger);

}

void preencheMat(int mat[2][2])
{
    int l,c;
    for ( l = 0; l < 2; l++)
    {
        for ( c = 0; c < 2; c++)
        {
            printf("Digite valor: ");
            scanf("%i",&mat[l][c]);
        }        
    }      
}

int maior(int mat[2][2])
{
    int l=0,c=0,m;
    m = mat[l][c];

    for ( l = 0; l < 2; l++)
    {
        for ( c = 0; c < 2; c++)
        {
            if (mat[l][c] > m)
            {
                m = mat[l][c];
            }            
        }        
    }
    return m;    
}

void matR(int mat[2][2],int bigger)
{
    int l,c,matRes[2][2];
    for ( l = 0; l < 2; l++)
    {
        for ( c = 0; c < 2; c++)
        {
            matRes[l][c]=mat[l][c]*bigger;
            printf("%d\t",matRes[l][c]);
        }
        printf("\n");
    }    
}