#include <stdio.h>12


int main(int argc, char const *argv[])
{
    int num;
    printf("Digite quantas vezes pretende imprimir um numero ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d", i);
    }

    return 0;
}
