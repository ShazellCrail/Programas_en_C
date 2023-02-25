#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define TAM_CADENA 50

void AjustarEntradas(char numero1[], char numero2[], int n, int base);
void VerificarPotenciaDos(char numero1[], char numero2[], int n, int base);
void Dividir(char numero1[], char numero2[], int base);

void main() 
{
	char numero1[TAM_CADENA], numero2[TAM_CADENA];
	int n, base;
	puts("Ingrese el primer numero:");
	gets(numero1);	
	puts("Ingrese el segundo numero:");
	gets(numero2);
	printf("Ingrese la longitud del numero con mayor cantidad de digitos: ");
	scanf("%d", &n);
	printf("\nIngrese la base de los numeros a multiplicar:\n1.- Binaria\n2.- Decimal\n3.- Hexadecimal\n");
	scanf("%d", &base);
	AjustarEntradas(numero1, numero2, n, base);
	return;
}

void AjustarEntradas(char numero1[], char numero2[], int n, int base){
	int tam_numero1=strlen(numero1), tam_numero2=strlen(numero2), total_ceros, i;
	char numero1bien[TAM_CADENA] = "";
	char numero2bien[TAM_CADENA] = "";
	
	if(tam_numero1<tam_numero2){
		total_ceros = tam_numero2 - tam_numero1;
		for(i=0; i<total_ceros; i++)
			strcat(numero1bien, "0");
		strcat(numero1bien, numero1);
		VerificarPotenciaDos(numero1bien, numero2, n, base);
	}
	if(tam_numero2<tam_numero1){
		total_ceros = tam_numero1 - tam_numero2;
		for(i=0; i<total_ceros; i++)
			strcat(numero2bien, "0");
		strcat(numero2bien, numero2);
		VerificarPotenciaDos(numero1, numero2bien, n, base);
	}else
		VerificarPotenciaDos(numero1, numero2, n, base);
}


void VerificarPotenciaDos(char numero1[], char numero2[], int n, int base){
	int i, resultado, total_ceros, j, numero=2;
	char numero1bien[TAM_CADENA] = "";
	char numero2bien[TAM_CADENA] = "";
		
	for(i=0; i<6; i++)
	{
		resultado = pow(numero, i);
		if(resultado==n){
			//printf("Numero 1: %s\nNumero 2: %s", numero1, numero2);
			Dividir(numero1, numero2, base);
			return;
		}
		if(resultado>n){
			total_ceros = resultado - n;
			for(j=0; j<total_ceros; j++){
				strcat(numero1bien, "0");
				strcat(numero2bien, "0");
			}
			strcat(numero1bien, numero1);
			strcat(numero2bien, numero2);
			printf("Numero 1 corregido: %s\nNumero 2 corregido: %s", numero1bien, numero2bien);
			Dividir(numero1bien, numero2bien, base);
			return;
		}
	}
}

void Dividir(char numero1[], char numero2[], int base){
	int i, j=0, mitad;
	char xi[TAM_CADENA], xd[TAM_CADENA], yi[TAM_CADENA], yd[TAM_CADENA];

	mitad = strlen(numero1)/2;
	
	for(i=mitad; i<strlen(numero1); i++){
		xd[j]=numero1[i];
		yd[j]=numero2[i];
		j = j+1;
	}
	
	for(i=0; i<mitad; i++){
		xi[i]=numero1[i];
		yi[i]=numero2[i];
	}
 	printf("\nxi = %s\nyi = %s\nxd = %s\nyd = %s", xi, yi, xd, yd);
}

int Multiplicar(char numero[], int base){
	if(strlen(numero)==1){
		return (int)numero;
	}
	else{
		
	}
}

//string divide
