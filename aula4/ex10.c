/*10) Crie um programa que apresente o seguinte menu:
   1 - Somar dois números
   2 - Subtrair dois números
   3 - Multiplicar dois números
   4 - Dividir dois números
   0 – Sair
Cada operação deverá ser implementada em uma função diferente. 
O menu deverá permanecer sendo apresentado utilizando um while até que o usuário escolha 0.*/

#include<stdio.h>

int menu();
void soma();
void sub();
void mul();
void div();


int main()
{
    int op = menu();
 
    while (op != 0)
    {
        
        if(op == 1)
        {
            soma();
        }else if(op == 2)
        {
            sub();
        }else if(op == 3)
        {
            mul();
        }else if(op == 4)
        {
            div();
        }else
        {
            printf("\nOperacao nao determinada!\n");
        }
        
       op = menu();
    }
    
}

int menu(){
    int op;
    printf("_______________________________\n");
    printf("Escolha uma das opcoes:\n1 - Somar dois números\n2 - Subtrair dois números)\n3 - Multiplicar dois números)\n4 - Dividir dois números)\n0 – Sair\n");
    scanf("%i",&op);
    if (op == 0)
    {
        printf("Programa finalizado!\n");
    }
    
    return op;
}

void soma()
{
    int n1,n2,r;
    printf("\nDigite numero para efetuar a soma: \n");
    scanf("%i",&n1);  
    printf("\nDigite segundo numero para a soma: \n");
    scanf("%i",&n2);
    r = n1 + n2;
    printf("%i + %i = %i\n\n", n1,n2,r); 
}
void sub()
{
    int n1,n2,r;
    printf("\nDigite numero para efetuar a subtracao: \n");
    scanf("%i",&n1);  
    printf("\nDigite segundo numero para a subtracao: \n");
    scanf("%i",&n2);
    r = n1 - n2;
    printf("%i - %i = %i\n\n", n1,n2,r);   
}

void mul()
{
    int n1,n2,r;
    printf("\nDigite numero para efetuar a multiplicacao: \n");
    scanf("%i",&n1);  
    printf("\nDigite segundo numero para a multiplicacao: \n");
    scanf("%i",&n2);
    r = n1 * n2;
    printf("%i * %i = %i\n\n", n1,n2,r);    
}

void div()
{
    float n1,n2,r;
    printf("\nDigite numero para efetuar a divisao: \n");
    scanf("%f",&n1);  
    printf("\nDigite segundo numero para a divisao: \n");
    scanf("%f",&n2);
   
    while (n2 == 0)
    {
        printf("Nao ha divisao por zero, digite outro numero!\n");
        scanf("%f",&n2);
    }
    
    r = n1 / n2;
    printf("%.2f / %.2f = %.2f\n\n", n1,n2,r);
}