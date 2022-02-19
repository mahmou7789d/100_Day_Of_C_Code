#include<stdio.h>

int main()
{
    float a=3.14;
    char *j;
    j = (char*)&a;
    printf("%d\n", *j);
    return 0;
}
