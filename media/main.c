#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    printf("\nF - Feminino");
    printf("\nM - Masculino");
    printf("\nN - não quero responder");
    printf("\nEscolha uma opcao:");
    scanf("%c%*c",&sexo);
//sexo = toupper(sexo);//mudou para maiuscula
//sexo = tolower(sexo);//mudou para minuscula

    switch(sexo){
    case 'f':
        printf("Sexo feminino");
    break;
    case 'M':
        printf("Sexo masculino");
    break;
    case 'N':
        printf("usuario nao quer responder");
    break;
    default:
        printf("opcao invalida");
    }

    return 0;
}
