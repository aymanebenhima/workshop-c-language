#include <stdio.h>
#include <stdlib.h>
int main()
{


     int metre;
     double Mile;

     printf("-------------------------------------------------\n");
    printf("----un programme qui transforme la distence en Mile  \n");
    
    printf("\n donnez  la distence en metre ");
      scanf("%d",&metre);
      Mile  =  metre / (1000 *1.609);
     printf(" la distance en Mile est : %.9f \n",Mile);
  
}
