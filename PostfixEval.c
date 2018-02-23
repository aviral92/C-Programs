#include<stdio.h>
#include<ctype.h>

int pop(int [],int *);

void push(int [],int *,int x);
void display(int a[],int top);
int post(char exp[],int a[],int *top);

int main()
{
   int x=0,z,c,a[10],top=-1,res;
   char exp[10];

do
{
  clrscr();
  printf("1.push\n");
  printf("2.pop\n");
  printf("3.display\n");
  printf("4. evaluate postfix \n");
  printf("5.exit\n");
  printf("enter choice\n");
  scanf("%d",&c);

switch(c)

{

case 1 :
    printf("enter the element");
	scanf("%d",&x);
    push(a,&top,x);
    printf("The element has been pushed \n");
	break;


//printf("the poped elements are");

case 2 :
  z=pop(a,&top);
  printf("the poped element is%d",z);
  break;
case 3:
  printf("The stack is \n");
    display(a,top);
    break;
case 4:
    printf("enter a valid postfix expression\n");
    fflush(stdin);
    gets(exp);
   res= post(exp,a,&top);
   printf(" The result is %d",res);
   break;
case 5:
   exit(0);
}

getch();
}while(c<=5);


return 0;
}

//push function
void push(int a[],int *top,int x)
{
if(*top==9)
{
	printf("stack is full");
}
else
{
  (*top)++;
  a[*top]=x;
}
return;
}

//pop function
int pop(int a[],int *top)
{
   int y;

   if(*top==-1)
   {
	printf("stack is empty\n");
   }
	else
	{
	   y=a[*top];
	   (*top)--;
	}
     return y;

}

//display function
void display(int a[],int top)
{    int i;
 for(i=top;i>=0;i--)
   printf("%d \n",a[i]);
}
//evaluation
int post(char exp[],int a[],int *top)
{
   int k=-1,op1,op2,num,r=0;
   puts(exp);
   while(exp[++k]!='\0')
   {
    if(isalpha(exp[k]))
    {
      printf("Enter value for %c ",exp[k]);
      scanf("%d",&num);
	    push(a,top,num);
    }
    else
    {
       op2=pop(a,top);
       op1=pop(a,top);
       switch(exp[k])
       {
	 case '+':r=op1+op2;
		  break;
	 case '-':r=op1-op2;
		  break;
	case '*':r=op1*op2;
		  break;
	case '/':r=op1/op2;
		  break;
	} //end of switch
     push(a,top,r);
     }

    }     //end of while
     return r;
    }
