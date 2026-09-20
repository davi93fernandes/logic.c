/*A prefeitura de Canoas abriu uma linha de crédito para seus funcionários. 
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. 
Faça uma função que recebe o salário bruto e o valor da prestação, 
e informa (imprime) se o empréstimo pode ou não ser concedido.*/

#include<stdio.h>


void imprime(float sal, float prest)
{
	if(prest <= (sal * 0.3))
    {
	    printf("\nEmprestimo autorizado!\n");
    }
    else
    {
        printf("\nEmprestimo nao autorizado\n");
    }
}

int main()
{
	float sal,prest;
	printf("\nInforme o salario bruto: \n");
	scanf("%f",&sal);

	printf("\nInforme o valor da prestacao: \n");
	scanf("%f",&prest);
	
	imprime(sal, prest);

	return 0;
}