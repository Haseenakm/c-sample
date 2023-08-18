/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],i;
    printf("array sample");
    printf("\n enter the array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are given below");
    for(i=0;i<5;i++)
    {
    
    printf("\n%d",a[i]);
    }
    return 0;
}
