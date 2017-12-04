/*menu driven program*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>   /* for exit*/

int main()
{
 int choice,num1,num2,result;
 do
 {
  clrscr();

 printf("\n\n\n         Main Menu  \n\n\n\n");
 printf("               1. Add      \n\n\n");
 printf("               2. Subtract \n\n\n");
 printf("               3. Multiply \n\n\n");
 printf("               4. Divide   \n\n\n");
 printf("               5. Exit     \n\n\n");
 printf("              ENTER CHOICE  ");
 scanf("%d",&choice);
 switch(choice)
 { case 1:printf("\n\nEnter the numbers to be added\n");
	  scanf("%d%d",&num1,&num2);
	  result=num1+num2;
	  printf("\n\nThe result is :");
	  printf("%d \n",result);
	  break;
    case 2:printf("Enter the numbers to be subtracted\n");
	  scanf("%d%d",&num1,&num2);
	  result=num1-num2;
	  printf("\n\nThe result is :");
	  printf("%d \n",result);
	  break;
    case 3:printf("Enter the numbers to be multiplied\n");
	  scanf("%d%d",&num1,&num2);
	  result=num1*num2;
	  printf("\n\nThe result is :");
	  printf("%d \n",result);
	  break;
     case 4:printf("Enter the numbers to be divided\n");
	  scanf("%d%d",&num1,&num2);
	  result=num1/num2;

	  printf("\n\nThe result is :");
	  printf("%d \n",result);
	  break;
    case 5:exit(0);
     default: printf("Wrong choice\n");
   }
   getch();
   }while(choice!=5);
return 0;
},result);
	  break;
    case 3:printf("Enter the numbers to be multiplied\n");
	  scanf("%d%d",&num1,&num2);
	  result=num1*num2;
	  