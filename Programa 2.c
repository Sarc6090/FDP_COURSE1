//IF-ELSE divisor

#include<stdio.h>

int main(){
	
	int num1, num2, residuo;
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n++++++¿Dos numeros son divisores entre si?++++++");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++");
	
	printf("\n\n\nIntroduce dos numeros para ver si son divisibles entre si: ");
	scanf(" %d %d", &num1, &num2);
	
	printf("Tu division es asi: %d / %d",num1,num2);
	
	residuo=num1%num2;
	
	if (residuo==0){
		
		printf("\nEl residuo es %d, por lo tanto son divisibles", residuo);
		
	} else printf("\nEl residuo es %d, por lo tanto no son divisibles", residuo);
	
	
	return 0;
	
}
