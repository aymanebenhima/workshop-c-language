#include <stdio.h>
#include <stdlib.h>
int main()
{

     int Ftemp ;
    
     float C_temp ;

     printf(" ---------------------------\n");

       printf(" Donnez la temperature en Fahrenheit   :  ");
       scanf("%d", &Ftemp);
       C_temp = (Ftemp-32)/1.8;
       if(C_temp < 20){
        printf("degre en Celsius est : %f   < il est tres froid  aujourdhui > ",C_temp);
       }else if(C_temp < 35){
          printf("degre en Celsius est : %f   < il est froid aujourdhui > ",C_temp);

       }else if (C_temp < 40){
          printf("degre en Celsius est : %f   < il est chaud aujourdhui > ",C_temp);

       }else if(C_temp > 40){
          printf("degre en Celsius est : %f   < il est tres chaud aujourdhui > ",C_temp);

       }
     printf(" \n ---------------------------");



}