//Implemenation of dequeue using doubly linked list

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct nodeptr
{
  int data;
  struct nodeptr *next;
  struct nodeptr *prev;
}*node;

typedef struct dequeueptr 
{
node tail;
node head;
}*dequeue;

dequeue createdequeue();
int isempty(dequeue l);
void insertatend(dequeue,int);
void insertatfront(dequeue,int);
void deleteatend(dequeue);
void deleteatfront(dequeue);
void display(dequeue);

int main()
{     dequeue l;
      int x,c,a,b;
       //clrscr();

   l=createdequeue();  //creates a dequeue with empty header

do
{

 // clrscr();
  printf("      D E Q U E U E   I M P L E M E N T A T I O N \n");
  printf("               USING DOUBLY LINKED LIST \n\n\n");
  printf("1.Insert at end\n");
  printf("2.Insert at front\n");
  printf("3. Delete at end \n");
  printf("4. Delete at front\n");
  printf("5. display\n");
  printf("enter choice\n");
  scanf("%d",&c);

switch(c)

{

case 1 :

    printf("Enter the element to be inserted at end");
	scanf("%d",&x);
    insertatend(l,x);
    printf("The element has been inserted at end\n");
    printf("The dequeue after insertion at end is \n\n");
    display(l);
    break;

case 2 :

    printf("Enter the element to be inserted at front");
	scanf("%d",&x);
    insertatfront(l,x);
    printf("The element has been inserted at front \n");
    printf("The dequeue after insertion at front is \n\n");
    display(l);
    break;
case 3 :
     if(isempty(l))
       printf("The dequeue is empty \n");
     else
     {
      deleteatend(l);
      printf("The element has been deleted from end \n");
      printf("The dequeue after deletion at end is \n");
      display(l);
    }
    break;
case 4:
    if(isempty(l))
      printf("Dequeue is empty \n");
    else
     {
       deleteatfront(l);

       printf("The element has been deleted from front \n");
       printf("The dequeue after deletion from front is \n");
       display(l);
     }
    break;

case 5:
     if(isempty(l))
       printf("Dequeue  is empty\n");
     else
     {printf("The dequeue is \n");
       display(l);
     }
     break;

}

getch();
}while(c<=5);


return 0;
}



//createdequeue


dequeue createdequeue()
{
   dequeue temp;

   temp=(dequeue)malloc(sizeof(struct dequeueptr));  //get space for one node
   if (temp==NULL)
     printf("ERROR in creating dequeue\n");
   else
    { temp->head->data=-1;       
      temp->tail->data=-1;
      temp->tail->next=NULL;
      temp->head->next=temp->tail;
      temp->tail->prev=temp->head;
      temp->head->prev=NULL;
      
     }
   return temp;
 }


//insert at the end of the dequeue
void insertatend(dequeue l,int x)
{
   dequeue p;
   node t;
   p=l;
   t=(node)malloc(sizeof(struct nodeptr));  //get space for node
   if(t==NULL)
     printf("error in allocating memory\n");
   else
   {
    t->data=x;
    t->next=p->tail;
    t->prev=p->tail->prev;
    p->tail->prev->next=t;
    p->tail->prev=t;
	//node created
   }

  return ;
}

//insert at the front of the dequeue
void insertatfront(dequeue l,int x)
{
   node t;
   dequeue p=l;
   
   t=(node)malloc(sizeof(struct nodeptr));  //get space for node
   if(t==NULL)
     printf("error in allocating memory\n");
   else
   {
    t->data=x;
    t->prev=p->head;
    t->next=p->head->next;
    p->head->next->prev=t;
    p->head->next=t; 
    

   }            //attach at head
return ;
}



//delete a node at end
void deleteatend(dequeue l)
{
   dequeue p;
   node t;
   p=l;
   
    //delete node
     t=p->tail->prev;
     p->tail->prev=t->prev;
     t->prev->next=p->tail;
     free(t);
     printf("Node has been deleted\n");

return ;
}


//delete a node from front
void deleteatfront(dequeue l)
{
   dequeue p;
   node t;
   p=l;
   
   t=p->head->next;
   p->head->next=t->next;
   t->next->prev=p->head;
     free(t);
     printf("Node has been deleted\n");

return ;
}

//display function
void display(dequeue l)
{    dequeue p=l;
     node t;
     t=p->head->next;
     while((t->next)!=NULL)
     {
       printf("%d\n",t->data);
       t=t->next;
      }

}

//empty
 int isempty(dequeue l)
{
  if(l->head->next==l->tail)
    return 1;
  else
    return 0;
 }
