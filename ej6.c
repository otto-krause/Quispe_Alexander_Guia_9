#include<stdio.h>
#include <stdlib.h>
int main()
{
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,proA,proG;
	int c=1,p=0;
	while(c<=30)
	{  
		printf("Ingrese las 10 notas: ");
		scanf("%f%f%f%f%f%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
		proA=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;
		printf("El promedio del alumno %d es %.1f\n",c,proA);
		p=p+proA;
		c++;
	}
	proG=c/30;
	printf("El promedio de la clase es: %.1f\n",proG);
	return 0;
}
