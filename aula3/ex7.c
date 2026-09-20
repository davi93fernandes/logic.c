/*Construa um programa que leia o conceito atribuído a um aluno (A, B, C, ou D) 
e a sua média final (valor real) e chama uma função para exibir
uma mensagem conforme as observações abaixo:
 Se o conceito for A o aluno ganha um ponto na média.
 Se o conceito for B o aluno ganha 0,5 ponto na média.
 Se o conceito for C o aluno não ganha nenhum ponto na média.
 Se o conceito for D o aluno perde 0,5 ponto na média.
A função deve imprimir se o aluno passou ou não de ano sabendo que a média para aprovação é 7,0.*/

#include<stdio.h>

void resultado(char conc, float med)
{
    switch (conc)
    {
    case 'A':
        med = med + 1.0;
        break;
    
    case 'B':
        med = med + 0.5;
        break;
    
    case 'C':
        break;
    
    case 'D':
        med = med - 0.5;
        break;
    
    default:
        printf("\nConceito nao definido!\n");
        return;
    }
    if (med >= 7.0)
    {
        printf("\nMedia do aluno eh %.2f, aluno aprovado!\n", med);
    }
    else
    {
        printf("\nMedia do aluno eh %.2f, aluno reprovado!\n",med);
    }
}

int main()
{
    float med;
    char conc;
 
    printf("\nDigite a media do aluno: \n");
    scanf(" %f",&med);

    printf("\nDigite o conceito A,B,C,D: \n");
    scanf(" %c",&conc);

    resultado(conc,med);

    return 0;

}