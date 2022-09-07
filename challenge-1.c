#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[10];
    char prenom[10];
    char sexe[10];
    int age;
    int numeroDeTelephone;
    
 
    printf("votre nome :  ");
        scanf("%s", &nome);
    printf("votre prenom :  ");
        scanf("%s", &prenom);
    printf("votre sexe :  ");
        scanf("%s", &sexe);
        printf("votre age :  ");
        scanf("%d",&age);
        printf("votre numeroDeTelephone : ");
    scanf("%d", &numeroDeTelephone);
 printf("------------------votre information personnelle est :----------------------\n");
    printf("  nome               : %s\n  prenom             : %s\n  sexe               :%s\n  numeroDeTelephone  :%d\n  age                :%d  \n",nome,prenom,sexe,numeroDeTelephone,age);
  
 
  
}