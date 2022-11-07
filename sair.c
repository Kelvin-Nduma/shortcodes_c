#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Digite y ou n como resposta");
    char res;
    switch (res)
    {
    case 'y':
        //exit(0);
        printf("permitido a sari do sistema");
        break;
    case 'n':
        printf("Pode digitar qualquer numero");
        break;
    default:
        printf("Opcao diferente de y ou N");
        break;
    }
    return 0;
}
