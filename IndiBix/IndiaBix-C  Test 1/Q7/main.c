#include<stdio.h>
int main()
{
    int a=10, *j;
    void *k;
    j=k=&a;
    j++;
    k++;
    printf("%u %u\n", j, k);
    return 0;
}
