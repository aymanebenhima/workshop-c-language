
#include <stdio.h>
#include <stdlib.h>
int main()
{

     int Ftemp ;
    
     float C_temp ;

     printf(" \n \n ---------------------------\n \n");

       printf(" Donnez la temperature en Fahrenheit   :  ");
       scanf("%d", &Ftemp);
       C_temp = (Ftemp-32)/1.8;
      
        printf("\n la temperature en degre en Celsius est : %f  ",C_temp);
          printf("\n \n ---------------------------\n \n");
       }