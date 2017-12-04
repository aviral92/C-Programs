#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *fp;
  char ans='y';
  struct employee
  {
    char name[20];
    int age;
    float salary;
  };
  struct employee e;
  clrscr();
  fp=fopen("emp.dat","w");
  if(fp==NULL)
  {
    puts("Coannot open file\n");
    exit(1);
  }
  while(ans=='y')
  { printf("Enter name,age,salary \n");
    scanf("%s%d%f",e.name,&e.age,&e.salary);
    fprintf(fp,"%s %d  %.2f\n",e.name,e.age,e.salary);

    fflush(stdin);
    printf("\n\n\n Add another ");
    ans=getchar();
  }
  fclose(fp);
  fp=fopen("emp.dat","r");
  if(fp==NULL)
  {
    puts("Coannot open file\n");
    exit(1);
  }
  clrscr();
  printf("The contents  of emp.dat file are \n\n\n\n");
  while(fscanf(fp,"%s%d%f",e.name,&e.age,&e.salary)!=EOF)
    printf("%s  %d  %.2f  \n",e.name,e.age,e.salary);
  fclose(fp);
  getch();
  return 0;
}