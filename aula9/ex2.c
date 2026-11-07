#include <stdio.h>


void le_vet(int vet[], int tamanho);
void intercala_vet(int vet1[], int tam1, int vet2[], int tam2, int vet3[]);
void imprime_vet(int vet[], int tamanho);

int main() 
{

    int tam1 = 5,tam2 = 7, tam3 = tam1 + tam2; 
    int vet1[tam1],vet2[tam2],vet3[tam3];

    
    printf("--- LENDO O VETOR 1 (%d elementos) ---\n", tam1);
    le_vet(vet1, tam1);

    printf("\n--- LENDO O VETOR 2 (%d elementos) ---\n", tam2);
    le_vet(vet2, tam2);

    
    intercala_vet(vet1, tam1, vet2, tam2, vet3);

    
    printf("\n VETORES IMPRESSOS\n");
    printf("Vetor 1: ");
    imprime_vet(vet1, tam1);

    printf("Vetor 2: ");
    imprime_vet(vet2, tam2);

    printf("Vetor 3 (Intercalado): ");
    imprime_vet(vet3, tam3);

    return 0;
}


void le_vet(int vet[], int tamanho) 
{
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento [%d]: ", i);
        scanf("%d", &vet[i]); 
    }
}


void intercala_vet(int vet1[], int tam1, int vet2[], int tam2, int vet3[]) 
{
    int i = 0, j = 0, k = 0;

    
    while (i < tam1 && j < tam2) {
        vet3[k++] = vet1[i++];
        vet3[k++] = vet2[j++];
    }

    while (i < tam1) {
        vet3[k++] = vet1[i++];
    }

    while (j < tam2) {
        vet3[k++] = vet2[j++];
    }
}
void imprime_vet(int vet[], int tamanho) 
{
    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    printf("]\n");
}
