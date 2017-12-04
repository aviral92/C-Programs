#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 3
int main()
{  int a[MAX][MAX],i,j,sum,k,p;

   clrscr();
   for(i=0;i<MAX;i++)
    for(j=0;j<MAX;j++)
       scanf("%d",&a[i][j]);
   j=1;
   k=MAX-1;
   sum=0;
   for(i=0;i<MAX;i++)
   {
    p=pow(-1,i);
    if(i==MAX-1)
      k=1;
    sum=sum+a[0][i]*p*(a[1][j]*a[2][k]-a[1][k]*a[2][j]);
    j=0;
   }
   printf("\n\nThe Given matrix is :\n");
   for(i=0;i<MAX;i++)
   {
    for(j=0;j<MAX;j++)

       printf("%d ",a[i][j]);
       printf("\n");
    }
  printf("\n\nTHE DETERMINENT IS \t %d",sum);
}
