#include "stdio.h"

int func(int *a)
{
    *a = 20;
    return 0;
}

int main()
{
    int valor = 0;
    valor = 10;
    func(&valor);
    printf("a=%d\n", valor);
    return 0;
}