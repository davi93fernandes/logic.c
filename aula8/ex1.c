/*
1 – Escreva um programa que recebe um valor inteiro do usuário e 
depois calcula seu quadrado e seu cubo (duas funções). 
Utilize chamada de parâmetro por referência.*/
#include<stdio.h>

void quadrado(int *n);
void cubo(int *n);

int main()
{
    int num;
    printf("Digite inteiro: \n");
    scanf("%d",&num);
    
    int num2 = num;
   
    quadrado(&num);
    printf("Quadrado = %d\n", num);

    cubo(&num2);
    printf("Cubo = %d\n", num2);
}

void quadrado(int *n)
{
    *n = *n * *n;
}

void cubo(int *n)
{
    *n = *n * *n * *n;
}

