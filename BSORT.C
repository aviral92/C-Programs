/*bubble sort*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int a[20],i,j,n,temp;
  clrscr();
  printf("Enter the elements of the array to end press -1\n");
  n=0;
  scanf("%d",&a[n]);
  while(a[n]!=-1)
  { n++;
    scanf("%d",&a[n]);
  }
  printf("The original array is \n");
  for(i=0;i<n;i++)
   printf("%d\n",a[i]);
  for(i=0;i<n;i++)
    for(j=0;j<(n-i-1);j++)
      if(a[j]>a[j+1])
	{ temp=a[j];
	  a[j]=a[j+1];
	  a[j+1]=temp;
	 }

printf("The sorted array is \n");
  for(i=0;i<n;i++)
   printf("%d\n",a[i]);
}
de<conio.h>
int main()
{
  int a[20],i,j,n,temp;
  clrscr();
  printf("Enter the elements of the array to end press -1\n");
  n=0;
  scanf("%d",&a[n]);
  while(a[n]!=-1)
  { n++;
    scanf("%d",&a[n]);
  }
  printf("The original array is \n");
  for(i=0;i<n;i++)
   printf("%d\n",a[i]);
  for(i=0;i<n;i++)
    for(j=0;j<(n-i-1);j++)
      if(a[j]>a[j+1])
	{ temp=a[j];
	  a[j]=a[j+1];
	  a[j+1]=temp;
	 }

printf("The sorted array is \n");
  fo