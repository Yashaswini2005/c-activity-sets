#include <stdio.h>
int main()
{
    int a = 10;
    int *b = &a;
    *b = 20;
    printf("%d\n",a);
}