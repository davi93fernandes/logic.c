/*Crie uma função que calcula o valor a ser pago por um produto, 
considerando o preço normal de etiqueta e a condição de pagamento. 
Utilize os códigos da tabela para ler a condição de pagamento e efetuar o cálculo:
COD CONDIÇÃO
    1 À Vista em dinheiro – 10% de desconto
    2 À Vista no cartão – 5% de desconto
    3 Em 2 vezes, preço normal de etiqueta
    4 Em 3 vezes, 10% de acréscimo.
A função deve fazer a leitura do valor e do código, 
e retornar o resultado do cálculo para ser impresso pela função main().*/

#include<stdio.h>

float calc()
{
    int condicao;
    float valor, valPgr;

    printf("valor do produto: \n");
    scanf("%f",&valor);

    printf("Condicao de pagamento: \n1 A vista em dinheiro - 10%% de desconto;\n2 A vista no cartao - 5%% de desconto;\n3 Em 2x - preco normal da etiqueta;\n4 Em 3x - 10%% de acrescimo.\n");
    scanf("%d",&condicao);

    switch (condicao)
    {
    case 1:
        valPgr = valor - (valor * 0.1);
        break;
    case 2:
        valPgr = valor - (valor * 0.05);
        break;
    case 3:
       valPgr = valor;
        break;
    case 4:
        valPgr = valor + (valor * 0.1);
        break;
    
    default:
        printf("\nCondicao invalida!\n");
        return 0;
    }
    return valPgr;
}

int main()
{
    printf("\nValor a pagar: %.2f\n", calc());
}