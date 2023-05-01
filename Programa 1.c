//Programa 1: El moyor de tres numeros If

#include<stdio.h>

int main()
{
	int num1, num2, num3, num4, bigger;													//Declarondo las variables que seran usadas posteriormente
	char choice;																		//Declarando una variable de tipo 'char' para la toma de decision
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n++++++ Diferenciando que numero es menor o mayor ++++++");
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	
    printf("\nIntroduce 3 numeros para compararlos: ");
    scanf(" %d %d %d", &num1, &num2, &num3);
    
    //Determinando cual de los tres numeros es mayor
	if (num1==num2 && num1==num3){														//Si los 3 son iguales
    	bigger=num1;
    	printf("\nLos tres numeros son iguales");
		}else if (num1>num2 && num1>num3){													//Si 'num1' es mayor
   			bigger=num1;
    		printf("\nEl numero %d es el mayor", num1);
			}else if (num2>num3) {																//Si 'num2' es mayor
				bigger=num2;
				printf("\nEl numero %d es el mayor", num2);
				}
					else {																				//Si 'num3' es mayor
						bigger=num3;
						printf("\nEl numero %d es el mayor", num3);
					}
    
    
	printf("\n�Deseas aniadir otro numero por comparar? (s=SI; n=NO):	");
	scanf(" %c", &choice);																//Tomando la desicion si se quiere a�adir un numero mas a comparar 
	
	if (choice == 's') {
	
    	printf("Introduce el cuarto numero: ");
    	scanf(" %d", &num4);	
																//Escaneando desde teclado en la variable 'num4' en caso de que la decision anterior sea positiva
    }
    	
    	if (num4>bigger){																	//Verificando si el nuevo numero es mayor al anterior mayor

        	bigger=num4;
       		printf("\nEl nuevo numero mayor es: %d", bigger);

		}else {																			//Si no se introdujo un nuevo numero o no es mayor
    			printf("\nEl numero %d sigue siendo el mayor", bigger);
       			}
    
    printf("\n++++++++++++++++++++++++++++++");
    printf("\n++++++ Fin del programa ++++++");
    printf("\n++++++++++++++++++++++++++++++");
	
    return 0;
}

