#include <stdio.h>
#include <stdlib.h>

int num;

int duplica(int x)
{
    return x * x;
}

int main(int argc, char const *argv[])
{
    // magic = rand();
    printf("Para digitar um numero e calcular o seu dobro ");
    scanf("%d", &num);
    printf("o numero duplicado e %d:", duplica(num));
    return 0;
}
