#include<stdio.h>
#include<stdlib.h>
main()
{
	int i;
	double *ape;
	double arreglo[5];
	ape=(double*)malloc(5*sizeof(double));
	for(i=0;i<5;i++)
	{
    printf("Introduzca el dato: \n");
	scanf("%lf", &arreglo[i]);
    }
    for(i=0;i<5;i++)
	{
	*ape=arreglo[i];
    printf("%lf\n", *ape);
    ape++;
    }
    system("PAUSE");
}
