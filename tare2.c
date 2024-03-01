#include <stdio.h>
#include <stdlib.h>

/* Desarrolla un programa en C donde calculas el area de un terreno cuadrado, triangular equilatero y rectangular, luego evalua cual de las areas entre los terrenos es mayor e
 imprimelo en pantalla 
 NOTA: Solicita los valores al usuario. */

int main(int argc, char *argv[]) {
	//Datos de entrada 
	float lado=0,area1=0,area2=0,area3=0,h1,b1,h2,b2;
	printf("ingresa el lado de tu terreno cuadrado\n");
	scanf("%f",&lado);
	printf("ingresa la altura tu triangulo equilatero\n");
	scanf("%f",&h1);
	printf("ingresa la base tu triangulo equilatero\n");
	scanf("%f",&b1);
	printf("ingresa la altura tu triangulo rectangulo\n");
	scanf("%f",&h2);
	printf("ingresa la base de tu triangulo rectangulo\n");
	scanf("%f",&b2);
	area1=lado*lado;
	area2=(h1*h2)/2;
	area3=(h2*b2)/2;
	if (area1>area2 && area1>area3)
	{
		printf("el area mayor es la del cuadrado ", area1); }else if(area2>area1 && area2>area3)
	{	}
	
	
	else if(area3>area1 && area3>area2)
	{
		printf("el area mayor es la del triangulo rectangulo ",area3);
	}else
	{
		printf("error");
	}
	system("pause");
	return 0;
}