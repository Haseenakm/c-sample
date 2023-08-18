/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int a[5],sum=0,i;
    printf("array element's sum");
    printf("\n........................");
    printf("\nenter the array elements");
    for(i=0;i<5;i++)
    {
        scanf("\n%d",&a[i]);/*user input hte value*/
        
        sum=sum+a[i];
    }
        printf(" the sum of array elements is=%d",sum);/*system print the value*/


    return 0;
}
