#include <stdio.h>

int main(int argc, char const *argv[])
{
    char res;
    printf("digite um numero para verificar o dia da semana :");

    res = getchar();
    switch (res)
    {
    case '2':
        printf("Segunda-feira");
        break;
    case '3':
        printf("terca-feira");
        break;
    case '4':
        printf("Quarta feira");
    case '5':
        printf("Quinta-feira");
        break;
    case '6':
        printf("Sexta-feira");
        break;
    default:
        printf("tenta numero no intervalo de 2 a 6");
        break;
    }
    return 0;
}
