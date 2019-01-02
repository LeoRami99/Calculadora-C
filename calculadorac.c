//calculadora desarrollada por Juan Leonardo Ramírez Velásquez.
//juanlov4321@gmail.com
//whatsapp: +573002100794
//Se es modificable el código a su gusto.
//se tiene una versione en el lenguaje de programación java 
//https://github.com/LeoRami99/Calculadora.git
//Para el limpiado de la consola
	//Win:
	//system("cls");
	//Linux:
	//system("clear");
	//#include <stdlib.h> para ambos.
//Win
//se debe de coloca system("pause");
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int opcion,num=0, num1=0;
	double result=0;
	printf("Hola bienvenido\n");
	do
	{
		printf("*******************************************************");                                                                                                                                                                                      
		printf("\n▒█▀▀█ █▀▀█ █   █▀▀ █  █ █   █▀▀█ █▀▀▄ █▀▀█ █▀▀█ █▀▀█ ");
		printf("\n▒█    █▄▄█ █   █   █  █ █   █▄▄█ █  █ █  █ █▄▄▀ █▄▄█ ");
		printf("\n▒█▄▄█ ▀  ▀ ▀▀▀ ▀▀▀  ▀▀▀ ▀▀▀ ▀  ▀ ▀▀▀  ▀▀▀▀ ▀ ▀▀ ▀  ▀\n ");
		printf("Version lenguaje de programación C\n");
		printf("\n*******************************************************\n");
		printf("Seleccion una de las opciones\n");
		printf("Opcion 1 Sumar \n");
		printf("Opcion 2 restar \n");
		printf("Opcion 3 multiplicar \n");
		printf("Opcion 4 dividir \n");
		printf("Opcion 5 salir \n");
		printf("Introduce la opcion >>");
		scanf("%i",&opcion);
		switch(opcion)
		{
			case 1:
				system("clear"); 
				printf("Hola estas en el apartado de Suma\n");
				int num, num1;
				printf("Introduce los dos numeros que deseas Sumar\n");
				printf(">>"); 
				scanf("%d",&num);
				printf(">>");
				scanf("%d",&num1);
				result = num+num1;
				system("clear");
				printf("**********************************\n");
				printf("El resultado es = %d\n",result );
				printf("**********************************\n");
			break;
			case 2: 
				system("clear");
				printf("Hola estas en el apartado de Restar\n");
				printf("Introduce los dos numeros que deseas Restar\n");
				printf(">>"); 
				scanf("%d",&num);
				printf(">>");
				scanf("%d",&num1);
				system("clear");
				result = num-num1;
				printf("**********************************\n");
				printf("El resultado es = %d\n",result );
				printf("**********************************\n");
			break;
			case 3:
				system("clear"); 
				printf("Hola estas en el apartado de Multiplicación\n");
				printf("Introduce los dos numeros que deseas multiplicar\n");
				printf(">>"); 
				scanf("%d",&num);
				printf(">>");
				scanf("%d",&num1);
				system("clear");
				result = num*num1;
				printf("**********************************\n");
				printf("El resultado es = %d\n",result );
				printf("**********************************\n");
			break;
			case 4: 
				system("clear");
				printf("Hola estas en el apartado de División\n");
				printf("Introduce los dos numeros que deseas dividir\n");
				printf(">>"); 
				scanf("%d",&num);
				printf(">>");
				scanf("%d",&num1);
				system("clear");
				result = num/num1;
				printf("**********************************\n");
				printf("El resultado es = %f\n",result );
				printf("**********************************\n");
				//system("screenfetch");
			break;
		}
	} while (opcion!=5);
	printf("Gracias por usar mi calculadora\n");
	printf("Recuerda que puedes seguirme en GitHub: https://www.github.com/leorami99\n");	
    return 0;
}

