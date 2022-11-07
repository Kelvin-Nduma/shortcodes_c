#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Digite dois numeros");
    scanf("%d%d", &a, &b);
    if (b)
        printf("%d ", a / b);
    else
        printf("Nao pode ser dividido pro zero");
    return 0;
}
