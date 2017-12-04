/* 1-x^2  +  x^4  -  x^3---------x^n
     ---     ----    ----        ----
     2!       4!      6!          n!*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int i,j,x,n,sign;
 float sum,term,fact,power;
 clrscr();
 printf("Enter the value of x\n");
 scanf("%d",&x);
 printf("Enter the value of nas even\n");
 scanf("%d",&n);
 sum=1;     sign=-1;
 for(i=2;i<=n;i+=2)
 { fact=1;
   for(j=1;j<=i;j++)
     fact=fact*j;
   power=pow(x,i);
   term=power/fact;
    sum=sum+sign*term;
    sign=sign*-1;
 }
 printf("The sum of the series is %f",sum);
 getch();
return 0;
}       n!*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int i,j,x,n,sign;
 float sum,term,fact,power;
 clrscr();
 printf("Enter the value of x\n");
 scanf("%d",&x);
 printf("Enter the value of nas even\n");
 scanf("%d",&n);
 sum=1;     sign=-1;
 for(i=2;i<=n;i+=2)
 { fact=1;
   for(j=1;j<=i;j++)
     fact=fact*j;
   power=pow(x,i);
   term=power/fact;
    sum=sum