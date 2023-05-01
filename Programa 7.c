//Programa 7: Switch-Case de Figuras geometricas


#include<stdio.h>

int main(){
    int choice, side, long_side, short_side, square_area, rectangle_area; //Declarando variables para el cálculo de áreas
    float triangle_area, leg1, leg2;
    
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n++++++ Calculadora de 3 areas geometricas ++++++");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++");

    printf("\nSelecciona una opcion del menu de areas: \n(1)Cuadrado \n(2)Rectangulo \n(3)Triangulo Regtangulo\n\nIntroduzca su eleccion: ");
    scanf("%d", &choice);				//Entrada desde teclado de la opción elegida

    switch (choice) {

        case 1:

            printf("\nIntroduce el valor de un solo lado por favor: ");
            scanf("%d", &side);																													//Escanenado desde teclado el valor del lado del cuadrado para obtener el area
            square_area = (side*side);																											//Calculando el area al multiplicar el lado por sí mismo
            printf("\nEl valor del area del cuadrado con lado de valor %d es: %d.", side, square_area);											//Mostrando en pantalla el resultado

            break;


        case 2:

            printf("\nIntroduce el valor del lado mayor por favor: ");
            scanf("%d", &long_side);																											//Escanenado desde teclado el valor del lado mayor del rectangulo
            printf("\nIntroduce el valor del lado menor por favor: ");
            scanf("%d", &short_side);																											//Escanenado desde teclado el valor del lado menor del rectangulo
            rectangle_area=(long_side*short_side);																								//Calculando el area al multiplicar el lado mayor por el menor
            printf("\nEl valor del area del rectangulo con lados de valor %d y %d es: %d.", long_side, short_side, rectangle_area);				//Mostrando en pantalla el resultado

            break;


        case 3:
        	
            printf("\nIntroduce el valor del primer cateto por favor: ");
            scanf("%f", &leg1);																												//Escanenado desde teclado el valor del primer cateto
            printf("\nIntroduce el valor del segundo cateto por favor: ");
            scanf("%f", &leg2);																												//Escanenado desde teclado el valor del segundo cateto
            triangle_area=(leg1*leg2)/2;																									//Calculando el area al multiplicar el primer cateto por el segundo
            printf("\nEl valor del area del triangulo rectangulo con lados de valor %.0f y %.0f es: %.2f.", leg1, leg2, triangle_area);				//Mostrando en pantalla el resultado
            
            break;
        
        
        default: printf("\nLa opcion sobrepasa el rango establecido.\n");																	//Mostrando en pantalla el excedente introducido
    }

    printf("\n++++++++++++++++++++++++++++++");
    printf("\n++++++ Fin del programa ++++++");
    printf("\n++++++++++++++++++++++++++++++");
    
    return 0;

}
