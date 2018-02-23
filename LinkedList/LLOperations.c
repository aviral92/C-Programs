#include<stdio.h>

typedef struct node
{
  int data;
  struct node *next;
}*nodeptr;

nodeptr createnodeptr();
int isempty(nodeptr l);
void insertatend(nodeptr,int);
void insertathead(nodeptr,int);
void insertafter(nodeptr,nodeptr,int);
void insertbefore(nodeptr,nodeptr,int);
nodeptr findprevious(nodeptr l,int x);
void deletenode(nodeptr,int);
void deletelastocc(nodeptr,int);
void deleteallocc(nodeptr,int);
nodeptr findfirst(nodeptr,int);
nodeptr findlast(nodeptr,int);
void display(nodeptr);

int main()
{     nodeptr l,p;
      int x,c,a,b;
       clrscr();

   l=createnodeptr();  //creates a nodeptr with empty header

do
{

  clrscr();

  printf("1.insert at end\n");
  printf("2.insert at head\n");
  printf("3.insert after a node\n");
  printf("4. insert before a node\n");
  printf("5. delete first occurance of a node \n");
  printf("6. Delete last occurance of a node\n");
  printf("7. Delete all occurances of a node\n");
  printf("8. search a node\n");
  printf("9. display\n");
  printf("enter choice\n");
  scanf("%d",&c);

switch(c)

{

case 1 :

    printf("Enter the element to be inserted at end");
	scanf("%d",&x);
    insertatend(l,x);
    printf("The element has been inserted \n");
    display(l);
    break;

case 2 :

    printf("Enter the element to be inserted at head");
	scanf("%d",&x);
    insertathead(l,x);
    printf("The element has been inserted \n");
    display(l);
    break;
case 3 :
    printf("enter the element after which U want to insert\n");
    scanf("%d",&a);
    printf("Enter the element to be inserted ");
	scanf("%d",&x);
    p=findfirst(l,a);
    if(p==NULL)
      printf("node not found\n");
   else
     insertafter(l,p,x);
    display(l);
    break;

case 4 :

    printf("enter the element before which U want to insert\n");
    scanf("%d",&b);
    printf("Enter the element to be inserted ");
	scanf("%d",&x);
    p=findprevious(l,b);
    if(p==NULL)
      printf("node not found\n");
    else
      insertbefore(l,p,x);
    display(l);
    break;

case 5:
       printf("Enter the element to be deleted (first)");
	scanf("%d",&x);
    deletenode(l,x);
    display(l);
    break;
case 6:
       printf("Enter the element to be deleted (last occurance)");
	scanf("%d",&x);
    deletelastocc(l,x);
    display(l);
    break;
case 7:
       printf("Enter the element to be deleted (all occurance)");
	scanf("%d",&x);
    deleteallocc(l,x);
    display(l);
    break;

case 8:

       printf("Enter the element to be searched");
	scanf("%d",&x);
    p=findfirst(l,x);
    if(p==NULL)
      printf("node not found\n");
    else
      printf("Node is present \n");
    break;

case 9:
     if(l->next==NULL)
       printf("nodeptr  is empty\n");
     else
     {printf("The nodeptr is \n");
       display(l);
     }
     break;

}

getch();
}while(c<=9);


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


//insert at the end of the nodeptr
void insertatend(nodeptr l,int x)
{
   nodeptr temp,p;
   p=l;
   temp=(nodeptr)malloc(sizeof(struct node));  //get space for node
   if(temp==NULL)
     printf("error in allocating memory\n");
   else
   {
    temp->data=x;
    temp->next=NULL;    //node created
   }


   while(p->next!=NULL)
       p=p->next;         //go to end of the nodeptr

  p->next=temp;           //attach at end
return ;
}

//insert at the head of the nodeptr
void insertathead(nodeptr l,int x)
{
   nodeptr temp;

   temp=(nodeptr)malloc(sizeof(struct node));  //get space for node
   if(temp==NULL)
     printf("error in allocating memory\n");
   else
   {
    temp->data=x;
    temp->next=l->next;     //node created
    l->next=temp;
   }            //attach at head
return ;
}

//insert after a given node
void insertafter(nodeptr l,nodeptr p,int x)
{
   nodeptr temp;
   //create a new node
   temp=(nodeptr)malloc(sizeof(struct node));
   if(temp==NULL)
     printf("error in allocating memory\n");
   else
   {
    temp->data=x;
     temp->next=p->next;
     p->next=temp;
     printf("Node has been inserted\n");
   }
return ;
}

//insert before a given node
void insertbefore(nodeptr l,nodeptr p,int x)
{
   nodeptr temp;

   //create a new node
   temp=(nodeptr)malloc(sizeof(struct node));
   if(temp==NULL)
     printf("error in allocating memory\n");
   else
   {
    temp->data=x;
     temp->next=p->next;
     p->next=temp;
     printf("Node has been inserted\n");
   }
return ;
}

//search first occurance of a node
nodeptr findfirst(nodeptr l,int x)
{
   nodeptr p;
   p=l->next;
   //find node
   while(p!=NULL && p->data!=x)
     p=p->next;

	return p;

}
//search node before last occurance of a node
nodeptr findlast(nodeptr l,int x)
{
   nodeptr p,q;
   p=l->next;  q==NULL;
   //find node
   while(p->next!=NULL)
   {if(p->next->data==x)
       q=p;
     p=p->next;
    }
   if(q!=NULL)
     return q;
   else
	return p;

}


//find node previous to the given node
nodeptr findprevious(nodeptr l,int x)
{
    nodeptr p;
    p=l;
    while(p->next!=NULL && p->next->data!=x)
       p=p->next;
    return p;
 }


//delete a given node first occurance
void deletenode(nodeptr l,int x)
{
   nodeptr p,temp;
   p=findprevious(l,x);

   //delete node
   if(p->next==NULL)
     printf("Node not found \n");
   else
   {
     temp=p->next;
     p->next=temp->next;
     free(temp);
     printf("Node has been deleted\n");
   }
return ;
}


//delete a given node last occurance
void deletelastocc(nodeptr l,int x)
{
   nodeptr p,temp;
   p=findlast(l,x);

   //delete node
   if(p->next==NULL)
     printf("Node not found \n");
   else
   {
     temp=p->next;
     p->next=temp->next;
     free(temp);
     printf("Node has been deleted\n");
   }
return ;
}
//delete all occurances of a given node
void deleteallocc(nodeptr l,int x)
{
   nodeptr p,temp;
   p=l;
   while(p->next!=NULL)
   {
   if(p->next->data==x)
   {
      temp=p->next;
      p->next=temp->next;
      free(temp);
      printf("Node has been deleted\n");
   }
   else
    p=p->next;
  } //end of while
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

//empty
 int isempty(nodeptr l)
{
  if(l->next==NULL)
    return 1;
  else
    return 0;
 }
