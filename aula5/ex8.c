/* Criar uma função que recebe uma matriz de inteiros de 4x4 já preenchida 
e imprime somente os valores contidos na sua diagonal principal.*/

#include<stdio.h>
void imprimeDiagonal(int mat[4][4]);

int main()
{
    int mat[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    imprimeDiagonal(mat);
    
    return 0;

}

void imprimeDiagonal(int mat[4][4])
{
    int l,c;

    for ( l = 0; l < 4; l++)
    {
        for ( c = 0; c < 4; c++)
        {
            if (c == l)
            {
                printf("%i ",mat[l][c]);
            }
            
        }
        
    }
    
}