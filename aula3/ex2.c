/*Construa uma função leia dois nomes e identifique se ambos têm a mesma quantidade de caracteres. 
Imprima o resultado da comparação na função main().*/

#include<stdio.h>
#include<string.h>

int verificaNomes()
{
    char n1[30],n2[30];
    int tn1,tn2,resposta;
    
    printf("Digite um nome: \n");
    fgets(n1, 30, stdin);
    
    printf("Digite outro nome: \n");
    fgets(n2, 30 ,stdin);
    
    n1[strcspn(n1, "\n")] = '\0';
    n2[strcspn(n2, "\n")] = '\0';
    
    tn1 = strlen(n1);
    tn2 = strlen(n2);

    if (tn1 == tn2)
    {
        resposta = 1;
    }else
    {
        resposta = 0;
    }
    return resposta;
}

int main()
{
    if (verificaNomes() == 1)
    {
        printf("\nSao iguais!\n");
    }else
    {
        printf("\nNao sao iguais!\n");
    }
    return 0;
}