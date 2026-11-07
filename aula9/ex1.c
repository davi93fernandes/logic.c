#include<stdio.h>

void calcAumento(float *salario, float *indice, float *v_Aumento, float *n_Salario);

int main()
{
    float mat[10][3];
    float n_Sal,val_aumento,indice;
    int f;

    printf("Informe o indice de aumento em %% :");
    scanf("%f", &indice);

    for ( f = 0; f < 10; f++)
    {
        
        printf("Digite o salario do funcionario %f: ", f + 1);
        scanf("%f",&mat[f][0]);
        
        calcAumento(&mat[f][0],&indice,&val_aumento,&n_Sal); 

        mat[f][1] = val_aumento;
        mat[f][2] = n_Sal;

    }


printf("\n----- RELATÓRIO ------\n");
for ( f = 0; f < 10; f++)
{
    printf("Funcionario %d | Salário: %.2f | Aumento: %.2f | Novo Salário: %.2f\n",f + 1, mat[f][0],mat[f][1],mat[f][2]);
}

    

return 0;

}

void calcAumento(float *salario, float *indice, float *v_Aumento, float *n_Salario)
{
    *n_Salario = *salario +(*salario * *indice/100);
    *v_Aumento = *salario * *indice/100;

}
