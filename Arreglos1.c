#include<stdio.h>
#include<stdlib.h>
main()
{
	int x[20];
	int i=0, pasada, aux;
	for(i=0;i<20;i++)
	{
		x[i]=rand();
		if(x[i]>1000)
		x[i]=x[i]%1000;
	}
		printf("Los números del arreglo son:\n");
	for(i=0;i<20;i++)
		printf("%4d",x[i]);
	for(pasada=1;pasada<20;pasada++)
	for(i=0;i<19;i++)
	if((x[i]%2)==0)
	{
		aux=x[i];
		x[i]=x[i+1];
		x[i+1]=aux;
	}
		printf("Los números ya organizados por impares y pares son:\n");
	for(i=0;i<20;i++)
		printf("%d\n",x[i]);
			printf("\n");
system("PAUSE");
}
