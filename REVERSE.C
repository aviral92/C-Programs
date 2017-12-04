#include<stdio.h>
#include<conio.h>
int main()
{
  long  int num,rev; /*rev of 12345 will be 54321 which exceeds the limit so long int*/
  int digit;
  clrscr();
  printf("enter the number to be reversed\n");
  scanf("%ld",&num); /*ld format for long integer*/
  digit=num%10;     /*last digit*/
  rev=digit;
  num=num/10;        /*reduce number*/
  while(num!=0)
  { digit=num%10;
    rev=rev*10+digit;
    num=num/10;
  }
  printf(" \nThe reversed number is %ld",rev);
  getch();
  return 0;
}
ude<stdio.h>
#include<conio.h>
int main()
{
  long  int num,rev; /*rev of 12345 will be 54321 which exceeds the limit so long int*/
  int digit;
  clrscr();
  printf("enter the number to be reversed\n");
  scanf("%ld",&num); /*ld format for long integer*/
  digit=num%10;     /*last digit*/
  rev=digit;
  num=num/10;        /*reduce number*/
  while(num!=0)
  { digit=num%10;
    rev=rev*10+digit;
    num=num/10;
  }
  printf(" \nThe reversed number is %ld",rev);
  getch();
  return 0;