/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int NUM1,NUM2;
    printf("enter the 2 number");
    scanf("%d%d",&NUM1,&NUM2);
    printf("check which number is biger number which number  is smaller number");
    if(NUM1>NUM2)
    {
        printf(" the greatest number is%d",NUM1);
    }else
     {
         printf("the greatest number is %d",NUM2);
     }
     
    return 0;
}
