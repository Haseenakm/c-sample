/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,value,res;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("1.addition\n2.substraction\n3.division\n4.multiplication");
    printf("\n please enter your choice");
    scanf("%d",&value);
    if(value==1)
    {
        res=a+b;
    }
        else if(value==2)
        {
           res= a-b;
            
        }
       else if(value==3)
        {
            res=a/b;
            
            
        }  
       else if(value==4)
       {
           res=a*b;
           
       }
       else
       {
           printf("there is no option for you");
           
       }
        printf("result is=%d",res);
    return 0;
}
