
#include <stdio.h>

int main()
{
	int numero;
	printf("Introduce un número: ");
	scanf("%d",&numero);
	int resultado=numero/2;
	printf("El numero introducido es: %d \n ",numero);
	while(resultado<0){
		printf("Resultado: %d", resultado);
		resultado=resultado/2;
		};
printf("ha salido del while \n");
	
	return 0;
}
