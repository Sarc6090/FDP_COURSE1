//Programa 5: Numero par o impar

#include<stdio.h>

int main(){
	
	int num1, residuo1;																	//Declarando variables del tipo entero para obtener si es par o impar
	
	printf("\n+++++++++++++++++++++++++++++++++");
    printf("\n++++++ Numero par o impar ++++++");
    printf("\n++++++++++++++++++++++++++++++++\n");
	
	printf("\nIntroduce el numero que deseas saber si es paro o impar: ");				
	scanf("%d", &num1);																	//Escaneando desde teclado en la variable 'num1' para asignarle un valor entero
	
	residuo1=num1%2;																	//Realizando el residuo de 'num1' con el numero '2'
	
	if(residuo1==0){
		
		printf("El numero %d es par", num1);
		
		}else printf("El número %d no es par." , num1);
	
	printf("\n++++++++++++++++++++++++++++++");
    printf("\n++++++ Fin del programa ++++++");
    printf("\n++++++++++++++++++++++++++++++");
	
	return 0;
	
}

