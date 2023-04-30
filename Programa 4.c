//Programa 4: De segundos a l formato de días, horas, minutos y segundos

#include<stdio.h>

int main(){
	
	int user_seconds, day, hour, minutes, seconds;
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n++++++ Convirtiendo segundos cuanto es en dias/horas/minutos/segundos ++++++");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	
	printf("\n\n\nIntroduce la cantidad de segundos que desees convertir: ");
	scanf(" %d", &user_seconds);
	
	day=user_seconds/(24*3600), hour=user_seconds/(60*60), minutes=(user_seconds%(3600))/60, seconds=(user_seconds%(3600))%60;
	
	printf("\n\nTu cantidad de %d segundos convertida es: %d dias, %d horas, %d minutos, %d segundos", user_seconds, day, hour, minutes, seconds);
	
	printf("\n++++++++++++++++++++++++++++++");
    printf("\n++++++ Fin del programa ++++++");
    printf("\n++++++++++++++++++++++++++++++");
	
	
	return 0;
	
}
