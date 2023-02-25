#include<stdio.h>
#include<stdlib.h>
main()
{
	int a, aux, lista=1;
	float promm1=0, promm1tot=0, promm2=0, promm2tot=0, promm3=0, promm3tot=0, promgrup=0;
	printf("¿Cuántos alumnos hay en el grupo?\n");
	scanf("%d", &a);
	float m1[a], m2[a], m3[a], promal[a];
	for(aux=0;aux<a;aux++)
	{
		printf("Ingrese los datos del alumno con numero de lista %d\n", lista);
		printf("Ingrese la calificación de la primer materia:\n");
        scanf("%f", &m1[aux]);
		printf("Ingrese la calificación de la segunda materia:\n");
        scanf("%f", &m2[aux]);
		printf("Ingrese la calificación de la tercer materia:\n");
        scanf("%f", &m3[aux]);
        lista=lista+1;
	}
	printf("\n");
	for(aux=0;aux<a;aux++)
	{
	promm1=promm1+m1[aux];
	promm2=promm2+m2[aux];
	promm3=promm3+m3[aux];
    }
    for(aux=0;aux<a;aux++)
		promal[aux]=(m1[aux]+m2[aux]+m3[aux])/3;
	printf("No.                                                         Promedio\n");
	lista=1;
	for(aux=0;aux<a;aux++)
	{
	printf("%d %14f %14f %14f %21f\n", lista, m1[aux], m2[aux], m3[aux], promal[aux]);
	lista=lista+1;
    }
    printf("\n");
    promm1tot=promm1/a;
    printf("El promedio de la primer materia es: %f\n", promm1tot);
    promm2tot=promm2/a;
    printf("El promedio de la segunda materia es: %f\n", promm2tot);
    promm3tot=promm3/a;
    printf("El promedio de la tercer materia es: %f\n", promm3tot);
    promgrup=(promm1tot+promm2tot+promm3tot)/3;
    printf("El promedio grupal es: %f\n", promgrup);
system("PAUSE");
}
