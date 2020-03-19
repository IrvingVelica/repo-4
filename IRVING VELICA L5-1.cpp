/*LAB 5 - Practica 1 */

#include <stdio.h> 
#include <stdlib.h> 

int main (void)
{
	float precio, total;
	printf("Ingrese el costo basico \n");
	scanf("%f",&precio);
	if (precio <20)
	{
	total=precio;
	}
	else if(precio >20 && precio <40){
	total=(float)precio+(precio*.30);
    }
    else if(precio >40&&precio<500)
	{ 
    total=(float)precio+(precio*.40); 
    } 
    else if(precio >=500);
	{
    total=(float)precio+(precio*.50);
    }
    printf("EL precio total del producto es %.2f\n", total);
    system ("pause");
    return 0;
}
