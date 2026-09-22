
/*EXERCÍCIO 2
Faça um programa em C que leia duas matrizes 5 x 5 de números  inteiros, informados pelo usuário, 
e escreva uma terceira matriz contendo os maiores valores de cada posição das duas matrizes lidas. 
Imprima a terceira matriz no formato quadrado (5 linhas e 5 colunas).

Observe a seguir o exemplo usando matrizes de 2 x 2:

Exercício Matriz

Para a implementação deste programa utilize as seguintes funções:
Função de leitura de uma matriz. 
Função para a construção da matriz contendo os maiores valores em cada posição.
Função para a impressão de uma matriz.*/

#include <stdio.h>
#define TAM 2

void funcaoReadMat(int mat[TAM][TAM],int numMat);
void funcaoBuildMat(int mat1[TAM][TAM],int mat2[TAM][TAM], int matRes[TAM][TAM]);
void funcaoprintMat(int mat[TAM][TAM]);

int main(){
    
    int m1[TAM][TAM],m2[TAM][TAM],matR[TAM][TAM];

    funcaoReadMat(m1,1);
    funcaoReadMat(m2,2);

    funcaoBuildMat(m1,m2,matR);
    
    funcaoprintMat(matR);    
}

void funcaoReadMat(int mat[TAM][TAM],int numMat){
    int i, j;
     printf("--- Digite os elementos da Matriz %d (%dx%d) ---\n", numMat, TAM, TAM);
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("[%d][%d]: ", i, j);;
            scanf("%i",&mat[i][j]);
        }
    }
}

void funcaoBuildMat(int mat1[TAM][TAM],int mat2[TAM][TAM], int matRes[TAM][TAM]){
    int i,j;
   
    for(i=0;i<TAM;i++){
   
        for(j=0;j<TAM;j++){
            
            if(mat1[i][j]>mat2[i][j]){
   
                matRes[i][j]=mat1[i][j];
            
            }else{
                matRes[i][j]=mat2[i][j];
            }
        }
    }
}

void funcaoprintMat(int mat[TAM][TAM]){
    int i,j;
    printf("\n M A T R I Z\n R E S U L T A D O\n");
    for ( i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    
}

