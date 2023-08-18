/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    float c,d;  
    printf("enter the 3 numbers");
    scanf("%d%d%F",&a,&b,&c);
    d=(a+b+c)/3;
    printf("the average of 3 number is=%f",d);

    return 0;
}
