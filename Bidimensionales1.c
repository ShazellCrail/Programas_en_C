#include<stdio.h>
#include<stdlib.h>
main()
{
	int i=0, j=0, x[3][3], y[3][3], z[3][3];
	printf("Ingrese los valores de la primera matriz\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("Ingrese el valor\n");
		scanf("%d",&x[i][j]);
	}
	printf("Ingrese los valores de la segunda matriz\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("Ingrese el valor\n");
		scanf("%d",&y[i][j]);
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		printf("%3d",x[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		printf("%3d",y[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	z[i][j]=x[i][j]+y[i][j];
}
for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		printf("%3d",z[i][j]);
		printf("\n");
	}
	printf("\n");
	system("PAUSE");
}
