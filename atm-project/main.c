/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[4],choice,balance=5000,repeat,d,withdraw,c=2000,i=0,mini[100];
    for(;;)
    {
    printf("welcome to the Bank of Nahyan Bin Najeeb");
    printf("\n plese enter your 4 digit pin number");
     for(int j=0;j<4;j++)
    {
    scanf("%d",&a[4]);
    }
    printf ("\nplease enter your chouce");
    printf("\n1.accountinfo\t\t2.Balance\n3.deposite\t\t4.with drawal\n5.pin change\t\t6.fast cash2000\n7.mini statement\n");
    scanf("%d",&choice);
    switch(choice)
     {
        case 1:
        printf("\nNahyan");
        printf("\nNRI");
        printf("\nponnani branch");
        break;
        case 2:if(balance>=0)
        {
        printf("your balance is=5000"); 
        }
        else
        {
            printf("there is no balance");
        }
        mini[i]=balance;
        i++;
        break;
        case 3:
        printf("deposite\n");
        printf("enter your amount want to deposite");
        scanf("%d",&d);
        balance=balance+d;
        printf("\nyour final balance is=%d",balance);
        mini[i]=d;
        i++;
        break;
        case 4:
        printf("withdrawal\n");
        printf("enter the amount you want to withdraw");
        scanf("%d",&withdraw);
        balance=balance-withdraw;
        printf("\nyour final balance is=%d",balance);
        mini[i]=withdraw;
        i++;
        break;
         case 5:
        printf("pin change\n");
        printf("enter your new pin number");
        scanf("%d",&a[4]);
        break;
        case 6:
        printf("fast cash 2000\n");
        balance=balance-c;
        printf("your final balance =%d",balance);
        mini[i]=c;
        i++;
        break;
        case 7:
        mini[i]=balance;
        mini[i]=d;
        mini[i]=withdraw;
        mini[i]=c;
        printf("\nmini statement\nbalanceamount%d\ndeposite%d\nwithdrawal amount%d\nfastcash%d",balance,d,withdraw,c);
        break;
        deafault:
        printf("you entered wrong option");
    }
    printf("\ndo you want to continue?yes=1\n no=2\n please input your choice:");
    scanf("%d",&repeat);
    if(repeat==2)
    {
        break;
    }
    }
    return 0;
}



