//Programa 6: Dia de la semana

#include<stdio.h>

int main(){
	
	int num_day;																				//Declarando una variable correspondiente al dia de la semana
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n++++++ El numero del dia de la semana ++++++");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("\nIntroduce el numero relacionado al dia de la semana: ");
	scanf("%d", &num_day);																		//Escanenado desde teclado que numero se quiere relacionar con el dia de la semana
	
	switch(num_day){
		
		case 1: printf("\nEl numero %d corresponde al dia: lunes.\n", num_day);
			break;
			
		case 2: printf("\nEl numero %d corresponde al dia: martes.\n", num_day);
			break;
			
		case 3: printf("\nEl numero %d corresponde al dia: miercoles.\n", num_day);
			break;
			
		case 4: printf("\nEl numero %d corresponde al dia: jueves.\n", num_day);
			break;
			
		case 5: printf("\nEl numero %d corresponde al dia: viernes.\n", num_day);
			break;
			
		case 6: printf("\nEl numero %d corresponde al dia: sabado.\n", num_day);
			break;
			
		case 7: printf("\nEl numero %d corresponde al dia: domingo.\n", num_day);
			break; 
			
		default: printf("\nEl numero %d esta fuera de rango\n", num_day);
	}
	
	printf("\n++++++++++++++++++++++++++++++");
    printf("\n++++++ Fin del programa ++++++");
    printf("\n++++++++++++++++++++++++++++++");
    
    return 0;
	
	}
