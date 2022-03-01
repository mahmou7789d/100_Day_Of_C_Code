/**
    Author : Mahmoud Hamed
**/

#include<stdio.h>

int main()
{
    char *str;
    str = "abcd\n";
    printf(str,"K\n");
    printf("%s","K\n");
    printf("******************************************************\n");
    char *ptr;
    ptr = "%s";
    printf(ptr,"K\n");
    printf("%s","K\n");
    printf("******************************************************\n");
    char *str_1;
    int i=2;
    str_1= "%d\n";
    printf(str_1,i);
    printf("******************************************************\n");
    char *str_2;
    str_2 = "%s";
    printf(str_2, "K\n");
    printf("%s\n", str_2); // prints "%s"
    printf("%c\n", str_2); // prints the address and converted it to char , which is '$' //warning
    printf("%c\n", *str_2); // prints '%'
    printf("******************************************************\n");
    char *str_3;
    str_3 = "hi %s hello\n";
    printf(str_3,"hh");
    printf("******************************************************\n");
    int x;
    x=78;
    void *vptr;
    vptr = &x;
    printf("%d\n",*(int *)vptr);
    int **q;
    q=&vptr;
    printf("%d\n",**q);
    printf("******************************************************\n");
    char s[]="good\n";
    printf(s);
    printf("******************************************************\n");
    printf("hi\n","bye\n"); //there is warning
    printf("******************************************************\n");
    char *s1 = "hello\n";
    char *s2 = "hi\n";
    printf(s1, s2);
    /************************************
    *The compiler warns about printf("hello", "hi") because it is able to see that this call contains an excess argument
    *because the format string does not contain a conversion specification for it.
    *Your compiler does not warn about printf(s1,s2); because it does not analyze what s1 will contain during this call.
    *This sort of analysis is not impossible in this situation, but situations like this are rare:
    *When a programmer uses a pointer to a string as the format string for printf,
    *it is usually a string or pointer that is computed, constructed, or selected during program execution,
    *and the manner of this computation is often beyond the ability of a compiler to analyze.
    */
    return 0;
}

//please explain this output: hi.
/*
Here printf function take the address of str it is pointing to the "hi %s hello"

it's print hi hh hello
%s will take address of hh

printf("%s")
it will print null

printf("%s","hi");
it's print hi

It takes address of string. Hope you are understand.
*/
