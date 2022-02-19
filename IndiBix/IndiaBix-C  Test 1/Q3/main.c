#include<stdio.h>
int main()
{
    struct emp
    {
        char name[20];
        float sal;
    };
    struct emp e[4];
    int i;
    for(i=0; i<=3; i++)
        scanf("%s %f", &e[i].name, &e[i].sal);
    return 0;
}
