#include<stdio.h>
#include<conio.h>
#define SIZE 5
int main()
{
  int a[SIZE],i;
   void rev(int a[],int l,int u);
   clrscr();
  printf("Enter the array\n");
  for(i=0;i<SIZE;i++)
    scanf("%d",&a[i]);
  rev(a,0,SIZE-1);
  printf("The reversed array is \n");
  for(i=0;i<SIZE;i++)
    printf("%d\n",a[i]);
 return 0;
 }

 void rev(int a[],int l,int u)
 {               int temp;

    if(l>=u)
       return;
    temp=a[u];
    a[u]=a[l];
    a[l]=temp;
    l++;u--;
    rev(a,l,u);
    return;
 }