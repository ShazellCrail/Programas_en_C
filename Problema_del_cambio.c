#include <stdio.h>
#include <stdlib.h>

void main(){
	int dinero_disponible[9], denominaciones[9], cantidades[9];
	int cambio, auxiliar, i = 0, respuesta;
	
	denominaciones[0] = 1;
	denominaciones[1] = 2;
	denominaciones[2] = 5;
	denominaciones[3] = 10;
	denominaciones[4] = 20;
	denominaciones[5] = 50;
	denominaciones[6] = 100;
	denominaciones[7] = 200;
	denominaciones[8] = 500;
	
	for(i=0; i<4; i++){
		printf("Ingrese la cantidad de monedas de $%d: ", denominaciones[i]);
		scanf("%d", &dinero_disponible[i]);	
	}	
	for(i=4; i<9; i++){
		printf("Ingrese la cantidad de billetes de $%d: ", denominaciones[i]);
		scanf("%d", &dinero_disponible[i]);
	}
	
	do{	
		printf("\nIngrese la cantidad de cambio que se va a dar: ");
		scanf("%d", &cambio);
		
		for(i=0; i<9; i++)
			cantidades[i] = 0;
			
		i = 0;
		auxiliar = cambio;
		
		do{
			if((auxiliar < denominaciones[i]) && (auxiliar < 500)){
				if(dinero_disponible[i-1] == 0)
					i = i - 2;
				else
					i = i - 1;
				if(dinero_disponible[i] > 0){
					cantidades[i] = cantidades[i] + 1;
	            	auxiliar = auxiliar - denominaciones[i];
	            	dinero_disponible[i] = dinero_disponible[i] - 1;
	            	i = 0;	
	            }else{
	            	printf("\n*** No es posible dar el cambio ***\n");
	            	exit(-1);
	        	}
			}else{
				if(auxiliar>500){
					if (dinero_disponible[8] > 0){
						cantidades[8] = cantidades[8] + 1;
	            	   	auxiliar = auxiliar - 500;
	           		 	dinero_disponible[8] = dinero_disponible[8] - 1;
	            	  	i = 0;
	             	}else
	             		if (dinero_disponible[7] > 0){
		              		cantidades[7] = cantidades[7] + 1;
		               		auxiliar = auxiliar - 200;
		            		dinero_disponible[7] = dinero_disponible[7] - 1;
		              		i = 0;
	              		}
				}else
					i++;
			}
		}while(auxiliar > 0);
		
		printf("\nEl cambio que debe ser entregado es:\n\n");
		for(i=8; i>=0; i--)
			if(cantidades[i] > 0)
			printf("%d ($%d)\n", cantidades[i], denominaciones[i]);
			
		printf("\n-------------------------------------------------------------\n\n");
		for(i=0; i<4; i++)
			printf("Cantidad de monedas de $%d: %d\n", denominaciones[i], dinero_disponible[i]);
		for(i=4; i<9; i++)
			printf("Cantidad de billetes de $%d: %d\n", denominaciones[i], dinero_disponible[i]);
		
		printf("\nDesea ingresar otro cambio???\n\n 1  SI\n 2  NO\n\n");
		scanf("%d", &respuesta);
		
		system("cls");
	}while(respuesta == 1);
	
	return;
}
