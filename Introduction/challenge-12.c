
#include<stdio.h>
#include<string.h>

int main(){
	
	char Number[30];
	
	printf("Entrer Un Nombre : \n");
	scanf("%s", &Number);
	
	printf("La reverse de la Nombre est  : %s" , strrev(Number));
	
return 0;
}




