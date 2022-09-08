#include <stdio.h>
int main()
{

    int r;
    int p = 3.14;

    printf(" \n \n ---------------------------\n \n");

    printf(" Donnez le rayon du cercle :   \n");
    scanf("%d", &r);

    printf("la circonference du cercle est : %f", (float)2 * p * r);
    
    printf(" \n \n ---------------------------\n \n");
}