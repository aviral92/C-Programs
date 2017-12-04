#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>


/*int main()
{
	char a[50];
	int i,c=0;
	printf("\n\n\n\n\n\t\t\tWELCOME TO THE WORLD OF PROGRAMMES");
	getch();
	system("cls");
	printf("\n\nEnter any string\n");

	scanf("%s",a);
		
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='.')
		c++;
	}


	if(c>=3)
	{printf("\n\nthis is an ellipsis string");
	}
	else
	{printf("\n\nthis is not an ellipsis string");}

	return 0;
}
	

int main()
{
	char a[50],b[50];
	int i,c=0;
	printf("\n\n\n\n\n\t\t\tWELCOME TO THE WORLD OF PROGRAMMES");
	getch();
	system("cls");
	printf("\n\nEnter any string\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{c=i;}
	}
printf(c);
return 0;
}

  

int main()
{
	int y,k=0,c=0,i;
	char a[50];
	//char* pStr = NULL;

	//pStr = (char*)malloc(50);
	printf("\n\nEnter any string\n");
	
	gets(a);
	
	
	printf("%s",a);
	//for(i=0;a[i]!='\0';i++);
	//k=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{c++;}
	}
	
	printf("\n\nno of words in string are:%d\n",c+1);
	printf("\n\nno of spaces in string are:%d\n",c);
	return 0;
}

int main()
{
	
	int i,j;
	int a[3][3];
	
	printf("\n\nEnter the matrix\n");
	
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	  scanf("%d",&a[i][j]);
	

	printf("\n\nmatrix is:\n");

	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
		printf("%d ",a[i][j]);
	 }
		printf("\n");
	}

	printf("\n\ntranspose of matrix is:\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
	{
		printf("%d ",a[j][i]);
	}
	
	}
	return 0;
	}
	

int main()
{
	char a[50],b[50];
	int i,c=0;
	printf("\n\n\n\n\n\t\t\tWELCOME TO THE WORLD OF PROGRAMMES");
	getch();
	system("cls");
	printf("\n\nEnter any string\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{break;}
	}
	
printf(c);
return 0;
}
*/
int main()
{
	FILE *fp_in,*fp_out;

	int c;
    c=222;
	fp_in=fopen("myfile.txt","r");

	fp_out=fopen("myfilecopy.txt","w");

                      
	//fprintf(fp_in,"%d",a);
	
	while((c=fgetc(fp_in))!=EOF)
	{
		fputc(c,fp_out);
		printf("%c",c);

		
	}

	printf("\n");

	fclose(fp_in);

	fclose(fp_out);

	return 0;

}


	