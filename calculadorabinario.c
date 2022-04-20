
#include <stdio.h>

int main()
{
	int numero;
	printf("Introduce un número: ");
	scanf("%d",&numero);
	while(numero>0){
		printf("Resultado: %d \n", numero%2);
		numero=numero/2;
		};
printf("Fin del cálculo");
	
	return 0;
}
