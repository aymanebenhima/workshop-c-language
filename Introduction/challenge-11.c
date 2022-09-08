

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float largeur;
    float longueur;

    printf(" \n \n ---------------------------\n \n");

    printf(" Donnez la longueur du rectangle :   \n");
    scanf("%f", &longueur);
    printf(" Donnez la largeur du rectangle :   \n");
    scanf("%f", &largeur);

    printf("la circonference du rectangle est : %f ", (float)2 * (longueur + largeur));

    printf(" \n \n ---------------------------\n \n");
}