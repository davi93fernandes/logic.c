/*Faça um programa que leia as notas de três provas dos alunos de uma turma. 
O programa deverá mostrar um relatório com o número dos alunos (número da linha) 
e a prova em que cada aluno obteve a menor nota. 
Ao final, o relatório, deverá mostrar quantos alunos tiveram a menor nota em cada um das provas: prova 1, prova 2 e na prova 3.
  
Para este programa, crie e utilize as seguintes funções:
    Uma função para a leitura das notas de uma quantidade indeterminadas de alunos em 3 provas.
    Uma função para a impressão do relatório contendo o número do aluno e a prova onde obteve a menor
        nota.
    Uma função para a impressão da quantidade de alunos que obtiveram a menor nota em cada uma das
provas.*/

#include<stdio.h>

int leituraNotas(float mat[][3]);
void printRelatorio(float mat[][3],int tam,int p1,int p2,int p3);
void relatPorProva(int p1,int p2, int p3);

int main()
{
    int alunos,contp1=0,contp2=0,contp3=0;
    const int MAX = 150;
    float mat[MAX][3];

    alunos=leituraNotas(mat);
    printRelatorio(mat,alunos,contp1,contp2,contp3);
}
int leituraNotas(float mat[][3])
{
    
    int aluno=0,nota;
    int escolha=1;
    
    printf("\nDeseja cadastrar aluno? 1=Sim/0=Nao\n");
    scanf("%i",&escolha);

    while (escolha == 1)
    {
        
        for ( nota = 0; nota < 3 ; nota++)
        {
            printf("Digite a nota %i do aluno: \n",nota+1);
            scanf("%f",&mat[aluno][nota]);
        }
        aluno++;
        printf("\nDeseja cadastrar aluno? 1=Sim/0=Nao\n");
        scanf("%i",&escolha);      
    }
    printf("\nPrograma encerrado!\n");
    return aluno;
}

void printRelatorio(float mat[][3],int tam,int p1,int p2,int p3)
{
    float menor;
    int l,c,piorPorva;
    for ( l = 0; l < tam; l++)
    {
        piorPorva=0;
        menor=mat[l][0];
        for ( c = 0; c < 3; c++)
        {
            if (mat[l][c] < menor)
            {
                menor=mat[l][c];
                piorPorva = c;
            }   
            
        }  
        switch (piorPorva)
            {
            case 0:
                p1++;
                break;
            case 1:
                p2++;
                break;
            case 2:
                p3++;
                break;;
            
            default:
                break;
            } 
        printf("Aluno %i, Pior prova: %i\n", l+1,piorPorva + 1);
    }
    relatPorProva(p1,p2,p3);
}

void relatPorProva(int p1,int p2, int p3)
{
    printf("\n\n------Quantidade de piores por prova --------\n"); 
    printf("Quantidade de alunos com pior nota na prova 1 é %i\n",p1);
    printf("Quantidade de alunos com pior nota na prova 2 é %i\n",p2);
    printf("Quantidade de alunos com pior nota na prova 3 é %i\n",p3);

}
    
