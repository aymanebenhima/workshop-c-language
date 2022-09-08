#include <stdio.h>
#include <stdlib.h>
int main()
{


     int F_temp;
     int C_temp;

     printf("-------------------------------------------------\n");
    printf("----un programme qui transforme la température en degré Celsius------\n");
    
    printf("\n donnez la temperateur en Fahrenheit   : ");
      scanf("%d",&F_temp);
      C_temp=(F_temp-32)/1.8;
     printf(" la temperateur en Celsius est : %d \n",C_temp);
  
    
  
}