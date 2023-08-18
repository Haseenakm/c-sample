/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int expression;
    printf("enter your choices");
    printf("\n1.\n2.\n3.\n4.\n");
    scanf("%d",&expression);
    
    switch(expression)
    {
        case 1:
        printf("you are super");
        break;
        case 2:
        printf("you are cool");
        break;
        case 3:
        printf("you are inteligent");
        break;
        case 4:
        printf("you are awesome");
        break;
        deafault:
        printf("you are my");
    }

    return 0;
}
