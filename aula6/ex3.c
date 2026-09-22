/*EXERCÍCIO 3 
Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. 
Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, 
sendo que caso o usuário digite um número que já foi digitado anteriormente, 
o programa deverá pedir para ele digitar outro número. 
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, 
verificando se ele existe entre os números que já foram fornecidos. 
Exibir na tela o vetor final que foi digitado. 

O programa deve possuir duas funções, uma para a leitura e outra para a impressão do vetor. 
As duas funções devem ser chamadas da função main.*/



#include<stdio.h>

void readVet(int vet[],int tam);
void printVet(int vet[],int tam);

int main(){
    const int t=10;
    int vet[t];
    readVet(vet,t);
    printVet(vet,t);

}

void readVet(int vet[],int tam){
   
    int num,i,j,encontrou;     // declara variaveis
    
    for (i = 0; i < tam; i++)  //percorre vetor ate preenche-lo
    {
        encontrou = 1;
        while (encontrou == 1)    //condicao de repeticao para que usuário digite apeanas valores diferentes
        {
            printf("Digite o %d digito: ", i+1);  //solicitacao do numero
            scanf("%d",&num);    //captacao do numero 

            encontrou=0;    // muda status para do encontrou, como se nao ha repetido
            for ( j = 0; j < i; j++)       //for de percorre vetor, testa somente até o indice preenchido j<i
            {
                if (num == vet[j])   //testa se numero digitado é igual ao conteudo do indice da atual volta do loop
                {   
                    encontrou = 1;   //alera status para 1 caso o teste acima seja verdadeiro (numero igual ao conteudo indice)                
                }
            }
            if (encontrou == 1)
            {
               printf("Numero ja existe! Digite outro. ");
            }                         
        }
        vet[i]=num; // adiciona o numero digitado a ao vetor   
    }
}

void printVet(int vet[],int tam){
    int i;
    printf("Vetor lido: [ ");
    for ( i = 0; i < tam; i++)
    {
        printf("%d ",vet[i]);
    }
    printf("]\n");
}
