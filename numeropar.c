//Autor: Javier Benavides Mu�oz
//Grupo: Q103
//Descripcion: El programa te dice si un numero es par

# include <stdio.h>
int main ()
{
int n;
printf("Escribe un numero entero\n");
scanf(" %d", &n);
if (n % 2 == 0) 
{ 
printf("El numero %d es par.\n", n);
}
else
{ 
printf("El n�mero %d es impar.\n", n);
} 

return 0;
}
