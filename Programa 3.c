//Programa 3: Año bisiesto IF-ELSE

#include<stdio.h>

int main(){
	int year, residuo1, residuo2, residuo3;
	
	printf("\n+++++++++++++++++++++++++++++++++++");
	printf("\n++++++¿Este anio es bisiesto?++++++");
	printf("\n+++++++++++++++++++++++++++++++++++");
	
	printf("\n\n\nInserta el anio que desees para saber si es bisiesto o no: ");
	scanf(" %d", &year);
	residuo1=year%4, residuo2=year%100, residuo3=year%400;
	
	if (residuo1==0 && residuo2==0 && residuo3==0){
		
		printf("\nEl anio %d SI es bisiesto.", year);
		
	}else if(residuo1==0 && residuo2==0 && residuo3!=0){
			
		printf("\nEl anio %d NO es bisiesto.", year);
					
	}else if (residuo1==0 && residuo2!=0 && residuo3!=0){
						
		printf("\nEl anio %d SI es bisiesto.", year);
						
	}
					
			
	
	printf("\n\n\n++++++++++++++++++++++++++++++++++");
	printf("\n++++++++Fin del programa++++++++++");
	printf("\n++++++++++++++++++++++++++++++++++");	
	
	return 0;
}
