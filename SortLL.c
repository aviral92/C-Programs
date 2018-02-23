//Create a ll in sorted order ascending

#include<stdio.h>

typedef struct node
{
  int data;
  struct node *next;
}*nodeptr;

nodeptr createnodeptr();
void insert(nodeptr,nodeptr,int);
nodeptr find(nodeptr,int);
void display(nodeptr);

int main()
{     nodeptr l,p;
      int c,x;
      //clrscr();

   l=createnodeptr();  //creates a nodeptr with empty header

do
{

  //clrscr();

  printf("1.insert at proper place\n");
  printf("2. display\n");
  printf("3. exit\n\n\n");
  printf("enter choice\n");
  scanf("%d",&c);

switch(c)

{

case 1 :

    printf("Enter the element to be inserted ");
	scanf("%d",&x);
     p=find(l,x);
    insert(l,p,x);
    printf("The element has been inserted \n");
    display(l);
    break;

case 2:
     if(l->next==NULL)
       printf("List  is empty\n");
     else
     {printf("The list  is \n\n\n");
       display(l);
     }
     break;

case 3: exit(0);
}

getch();
}while(c<=3);


return 0;
}



//createnodeptr


nodeptr createnodeptr()
{
   nodeptr temp;

   temp=(nodeptr)malloc(sizeof(struct node));  //get space for one node
   if (temp==NULL)
     printf("ERROR in creating nodeptr\n");
   else
    { temp->data=-1;
      temp->next=NULL;
     }
   return temp;
 }


 nodeptr find(nodeptr l,int x)
 {
   nodeptr p;
   p=l;
   while(p->next!=NULL && p->next->data  < x)
       p=p->next;
   return p;
 }


//insert at the proper place
void insert(nodeptr l,nodeptr p,int x)
{
   nodeptr temp;
   temp=(nodeptr)malloc(sizeof(struct node));  //get space for node
   if(temp==NULL)
     printf("error in allocating memory\n");
   else
   {
    temp->data=x;
    temp->next=NULL;    //node created
   }

   if(p->next!=NULL)
   {  temp->next=p->next;        //add between
      p->next=temp;
    }
   else
     p->next=temp;    //add at end
return ;
}

//display function
void display(nodeptr l)
{    nodeptr p;
     p=l->next;  //since first node is dummy
     while(p!=NULL)
     {
       printf("%d\n",p->data);
       p=p->next;
      }

}
