#include <stdio.h>
/*
Autora: Ester Ruiz
Grupo: Q103
Descripci�n: Calcula el valor absoluto de un n�mero entero
*/
int main(){
	int num, resultado;
	printf("Introduce tu numero:\n");
	scanf("%d", &num);
	if(num<0){
		resultado=num*(-1);
		printf("El valor absoluto es %d", resultado);
	}
	else{
		resultado=num;
		printf("El valor absoluto es %d", resultado);
	}
}
