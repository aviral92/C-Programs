#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<ctime>

#define TRIALS 10000
 
int brand(int n)
{
  return(rand()%n);
  
}
  
int main()
{
  int prize, choice, show, notshown, newchoice;
  int staywinning=0, changewinning=0, randomwinning=0;
  int odoor[2];
  int i,j,k;
  srand((unsigned)time(0));
  for(i=0; i < TRIALS; i++)
  {
     /* put the prize somewhere */
     prize = brand(3);
     /* let the user choose a door */
     choice = brand(3);
     /* let us take a list of unchoosen doors */
     for (j=0, k=0; j<3; j++)
     {
        if (j!=choice)
        odoor[k++] = j;
     }
     /* Monty opens one... */
     if ( choice == prize )
     { /* staying the user will win... Monty opens a random
          port*/
       show = odoor[ brand(2) ];
       notshown = odoor[ (show+1)%2 ];
     } else { /* no random, Monty can open just one door... */
       if ( odoor[0] == prize )
       {
           show = odoor[1];
           notshown = odoor[0];
       } else {
           show = odoor[0];
           notshown = odoor[1];
       }
     }
 
     /* the user randomly choose one of the two closed doors
        (one is his/her previous choice, the second is the
        one notshown */
     odoor[0] = choice;
     odoor[1] = notshown;
     newchoice = odoor[ brand(2) ];
     /* now let us count if it takes it or not */
     if ( choice == prize ) staywinning++;
     if ( notshown == prize ) changewinning++;
     if ( newchoice == prize ) randomwinning++;
  }
 
  printf("Staying: %.2f\n", (((float)staywinning/(float)TRIALS)*100) );
  printf("Changing: %.2f\n", (((float)changewinning/(float)TRIALS)*100) );
  printf("New random choice: %.2f\n", (((float)randomwinning/(float)TRIALS)*100) );  
getch();
return 0;
}
