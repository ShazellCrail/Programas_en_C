#include<stdio.h>
#include<stdlib.h>
main()
{
	int x[3][3], i=0, j=0, k=0, y[3][3], respuesta=0;
	printf("Ingrese los valores de la matriz:\n");
	for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
		scanf("%d", &x[i][j]);
	}
	printf("\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
	printf("%3d", x[i][j]);
	printf("\n");
    }
    printf("\n");
    printf("Matriz ya rotada:\n");
    do
    {
		for(i=0;i<3;i++)
		{
         k=2;
			for(j=0;j<3;j++)
			{
				y[i][j]=x[k][i];
				k--;
				printf("%3d", y[i][j]);
  	        }
            printf("\n");
	    }
	    for(i=0;i<3;i++)
	    for(j=0;j<3;j++)
		x[i][j]=y[i][j];
		printf("\n");
	    printf("¿Quiere volver a rotar la matriz?\n 1-Sí\n 2-No\n");
	    scanf("%d", &respuesta);
	}
	while(respuesta==1);
	if(respuesta==2)
	exit(0);
	system("PAUSE");
}
