#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main()
{

     int x1,y1,x2,y2;
   

     printf(" \n \n ---------------------------\n \n");

       printf(" Donnez x1,y1  les coordonnees de premier point  :   \n");
     
       
       scanf("%d%d", &x1,&y1);
         printf("   les coordonnees de premier point est M(%d,%d) :   \n",x1,y1);
        printf(" Donnez x2,y2 les coordonnees  de deuxiem point  :   \n");
       scanf("%d%d", &x2,&y2);
       printf("   les coordonnees de deuxiem point est M(%d,%d) :   \n",x2,y2);

       
               printf("  la distance entre les deux points est : %f  \n",(float)sqrt( pow( x1+x2, 2 ) + pow( y1+y2, 2 ) ));
    printf(" \n \n ---------------------------\n \n");

      
       }