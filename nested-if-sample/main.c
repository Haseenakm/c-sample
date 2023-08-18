/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
      int num1,num2,num3;
    printf("enter 3 numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1<num2)
    {
      if(num2<num3)
       {
        printf("greatest is %d",num3);
       }
       else
       {
         printf("greatest num is %d",num2);
        }
    }
    else
     {
       if(num1>num2)
       {
        printf("greatest is %d",num1);
       }
        else
       {
        printf("greatest is %d",num2);
       }
     }

    return 0;
}
