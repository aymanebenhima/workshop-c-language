#include <stdio.h>
#include <stdlib.h>
int main()
{
     int Mile;
    
     float metre;
     printf(" ---------------------------\n");

       printf(" Donnez la distance en Mile  : ");
       scanf("%d", &Mile);
       metre = (Mile  * (1000 *1.609));
       printf(" \n Donnez la distance en metre est  : %f",metre);
     printf(" \n ---------------------------");
}