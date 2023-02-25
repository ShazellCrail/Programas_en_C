#include<stdio.h>
#include<stdlib.h>
main()
{
	int i=0, j=0, x[3][3], y=0, a=0, b=0, c=0, d=0, e=0, f=0, g=0;
	printf("Ingrese los valores de la matriz\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("Ingrese el valor\n");
		scanf("%d",&x[i][j]);
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		printf("%3d",x[i][j]);
		printf("\n");
	}
	printf("\n");
		for(j=0;j<3;j++)
		y=y+x[0][j];
		printf("Suma de la primer fila: %d\n",y);
        for(j=0;j<3;j++)
		a=a+x[1][j];
		printf("Suma de la segunda fila: %d\n",a);
	for(j=0;j<3;j++)
		b=b+x[2][j];
		printf("Suma de la tercer fila: %d\n",b);
		for(i=0;i<3;i++)
		c=c+x[i][0];
		printf("Suma de la primer columna: %d\n",c);
		for(i=0;i<3;i++)
		d=d+x[i][1];
		printf("Suma de la segunda columna: %d\n",d);
		for(i=0;i<3;i++)
		e=e+x[i][2];
		printf("Suma de la tercer columna: %d\n",e);
		for(i=0;i<3;i++)
		g=g+x[i][i];
		printf("Suma de la primer diagonal: %d\n",g);
		i=0;
    for(j=2;j>=0;j--)
    {
    f=f+x[i][j];
    i=i+1;
    }
		printf("Suma de la segunda diagonal: %d\n",f);
	system("PAUSE");
}
