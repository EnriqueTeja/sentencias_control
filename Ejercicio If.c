#include <stdio.h>
/*
Autor: Alonso S�nchez Garc�a
Grupo: Q103
Descripci�n: Introce su edad y te dice si estas en edad laboral o no
*/

int main(){
	int edad;
	printf("Introduzca su edad: ");
	scanf("%d",&edad);
	if(edad>=18){
		if(edad<=65)
		printf("Esta usted en edad laboral\n");
		else    
		printf("No esta usted en edad laboral\n");
	}
	else{
		printf("No esta usted en edad laboral\n");
	}
}
	

