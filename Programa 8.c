//Programa 8: Switch-Case Vocal

#include<stdio.h>
#include<string.h>

int main() {
	
	char letter, lowered_letter;																			//Definiendo la variable tipo char para la letra a identificar
	int variable;
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n++++++ Diferenciador de vocales y consonantes ++++++");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("\nIntroduce la letra que quieras (consonante o vocal): ");
	scanf("%c", &letter);																					//Escanenando desde teclado la letra a diferenciar
	
	lowered_letter=tolower(letter);																			//Si se mete una letra mayuscula, se reduce a minuscula para no obtener un resultado falso	
	
	if(lowered_letter=='a' || lowered_letter=='e' || lowered_letter=='i' || lowered_letter=='o'|| lowered_letter=='u')		//Se lee que la letra sea un a vocal para asigniar un valor a 'variable'
	
		variable=1;
	
	
	switch(variable){
		
		case 1: printf("\nLa letra %c es una vocal\n", letter);												//Si 'variable' tiene un valor, es vocal y pasa al caso 1
			
			break;
		
		default: printf("\nLa letra %c una consonante\n", letter);											//Si 'variable' NO tiene un valor, es consonante y es el caso por defecto
		
	}
	
	printf("\n++++++++++++++++++++++++++++++");
    printf("\n++++++ Fin del programa ++++++");
    printf("\n++++++++++++++++++++++++++++++");
	
	return 0;
}
