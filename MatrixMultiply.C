#include<stdio.h>
#include<conio.h>
void main()
{ int a[5][5],b[5][5],c[5][5],i,j,k,r1,c1,r2,c2;
clrscr();
printf("enter row and column of first matrix\n");
scanf("%d%d",&r1,&c1);
printf("enter row and column of second matrix\n");
scanf("%d%d",&r2,&c2);
if(c1!=r2)
{  printf("incompatable\n");
  exit(0);
  }
printf("enter first matrix\n");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
 scanf("%d",&a[i][j]);
printf("enter second matrix\n");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
  scanf("%d",&b[i][j]);

  for(i=0;i<r1;i++)
   for(j=0;j<c2;j++)
   {
     c[i][j]=0;
     for(k=0;k<c1;k++)
      c[i][j]=c[i][j]+a[i][k]*b[k][j];
   }
 printf("resultant matrix\n");
 for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)

  printf("%d  ",c[i][j]);
printf("\n");
}

}

