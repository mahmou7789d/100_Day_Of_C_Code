#include<stdio.h>

int main()
{
    char ch = 'A';
    printf("%d, %d, %d", sizeof(ch), sizeof('A'), sizeof(3.14f));
    return 0;
}
