/*4)Leia duas strings e crie uma terceira com a concatenação dos últimos caracteres das duas strings.*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30], str2[30], str3[100];
    char st1,st2;

    printf("Digite uma string: \n");
    fgets(str1, 30, stdin);
    
    printf("Digite outra string: \n");
    fgets(str2, 30, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
   
    st1 = str1[strlen(str1)-1];
    st2 = str2[strlen(str2)-1];

    str3[0] = st1;
    str3[1] = st2;
    str3[2] = '\0';


    printf("%s\n",str3);

}