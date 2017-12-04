/*Selectio sort*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int a[20],i,j,n,small,pos,temp;
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
   /*selectio sort*/
  for(i=0;i<n-1;i++)
  { small=a[i];
    for(j=i+1;j<n;j++)
      if(a[j]>small)
	{ small=a[j];
	  pos=j;
	 }

  temp=a[i];
  a[i]=a[pos];
  a[pos]=temp;
  }
printf("The sorted array is \n");
  for(i=0;i<n;i++)
   printf("%d\n",a[i]);
}

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
   /*selectio sort*/
  for(i=0;i<n-1;i++)
  { small=a[i];
    for(j=i+1;j<n;j++)
      if(a[j]>small)
	{ small=a[j];
	  pos=j;
	 }

  temp=a[i];