/*Fazer um programa que recebe três valores do usuário 
e depois encontra o maior e o menor número. 
Construa duas funções, uma para determinar o maior número e outra para determinar o menor número.*/

#include<stdio.h>

int maior(int n1,int n2,int n3)
{
    int maior = n1;
    if (n2 > maior)
    {
        maior = n2;
    }
    if( n3 > maior)
    {
        maior = n3;
    }
    return maior;
}

int menor(int n1,int n2,int n3)
{
    int menor=n1;
    if (n2 < menor)
    {
        menor = n2;
    }
    if (n3 < menor)
    {
        menor = n3;
    }
    return menor;    
}

int main()
{
    int n1,n2,n3;
    printf("Digite 3 valores\n");
    scanf("%i%i%i",&n1,&n2,&n3);
    printf("O maior eh %i\n",maior(n1,n2,n3));
    printf("O menor eh %i\n",menor(n1,n2,n3));

    return 0;

}