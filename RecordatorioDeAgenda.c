/*Autor: Iv�n Herranz 
Grupo: Q103
Descripci�n: Te recuerda las asignaturas que tenemos los alumnos del grupo Q103 durante el 2� cuatrimestre en funci�n del d�a de la semana*/

#include<stdio.h>

int main(){
	
	//Declaro y asigno variables
	 int x;
	
	printf("Sus clases de hoy son:\n Introduzca la posici�n de la semana en la que se encuentra (Ej:2)");
	scanf("%i",&x);
	if(x<=7){
		if(x=1){
		printf("Hoy es lunes y usted tiene: Informatica y Principios de procesos Qu�micos");
		}else if(x=2){
		printf("Hoy es martes y usted tiene: Ampliaci�n y F�sica");
		}else if(x=3){
		printf("Hoy es miercoles y usted tiene: Estadistica e Informatica");
		}else if(x=4){
		printf("Hoy es jueves y usted tiene: Metodos numericos y Ampliaci�n");
		}else if(x=5){
		printf("Hoy es viernes y usted tiene: Fisica y Estadistica\n Buen finde");
		}else if(x>=6){
		printf("Hoy es fin de semana: Agenda vacia");
	}
	}else {
	printf("Su introducci�n es incorrecta");
}
}
