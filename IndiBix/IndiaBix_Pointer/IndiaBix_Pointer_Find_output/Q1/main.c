
#include<stdio.h>

int main()
{
    static char *s[] = {"black", "white", "pink", "violet"};
    char **ptr[] = {s+3, s+2, s+1, s}, ***p;
    p = ptr;
    ++p;
    printf("%s\n", *s);
    printf("%s\n", **ptr+1);
    printf("%s\n", **p);
    printf("%s", **p+2);
    return 0;
}
