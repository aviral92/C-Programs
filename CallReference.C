/*call by reference */

#include<stdio.h>
#include<conio.h>

 int main()
{ int a,b;
void   swap(int *,int *) ;/*prototype of function*/

clrscr();
 printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("The numbers before swap are\n");
printf("%d %d ",a,b);
swap(&a,&b);               /*address are passed*/
printf("\nThe numbers after swap are\n");
printf("%d %d ",a,b);
getch();
return 0;
}
void swap(int *a,int *b)  /*a and b are pointer variables*/
{int temp;
temp=*a;
*a=*b;
*b=temp;
}


rence */

#include<stdio.h>
#include<conio.h>

 int main()
{ int a,b;
void   swap(int *,int *) ;/*prototype of function*/

clrscr();
 printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("The numbers before swap are\n");
printf("%d %d ",a,b);
swap(&a,&b);               /*address are passed*/
printf("\nThe numbers after swap are\n");
printf("%d %d ",a,b);
getch();
return 0;
}
void swap(int *a,int *b)  /*a and b are pointer variables*/
{int temp;
temp=*a;
*a=*b;
*b=