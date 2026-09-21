/*5)Leia duas strings e informe: se são iguais; qual delas é maior em número de caracteres.*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30],str2[30];
    int comp1,comp2;

    printf("Dgite uma string: \n");
    fgets(str1, 30 , stdin);
    str1[strcspn(str1, "\n")] = '\0';
    
    printf("Dgite outra string: \n");
    fgets(str2, 30 , stdin);
    str2[strcspn(str2, "\n")] = '\0';

    comp1 = strlen(str1);
    comp2 = strlen(str2);

    
    if(strcmp(str1,str2) == 0)
    {
        printf("\nStrings sao iguais\n");
    }
    else 
    {
        printf("\nStrings nao sao iguais\n");
    }
    
    if( comp1 > comp2)
    {
        printf("\nprimeira string é maior!\n");
    }
    else if(comp1 < comp2)
    {
        printf("\nSegunda string é maior!\n");
    }
    
}
