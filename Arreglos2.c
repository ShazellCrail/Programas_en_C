#include<stdio.h>
#include<stdlib.h>
main()
{
	int x[10];
	int i=0, j=1;
	for(i=0;i<10;i++)
	{
		printf("Ingrese el dato número %d:\n",j);
		scanf("%d",&x[i]);
		j=j+1;
	}
	for(i=0;i<10;i++)
	printf("%4d",x[i]);
	printf("\n");
	for(i=0;i<10;i++)
	{
	if((i%2)==0)
	x[i]=x[i]+2;
	else
	x[i]=x[i]+3;
}
 for(i=0;i<10;i++)
	printf("%4d",x[i]);
	printf("\n");
	system("PAUSE");
}
