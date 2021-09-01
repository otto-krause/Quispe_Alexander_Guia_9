#include<stdio.h>
#include <stdlib.h>
int main()
{
	int suel,cant1=0,cant2=0,I=1;
	while(I<=20)	
	{
		printf("Ingrese el sueldo:");
		scanf("%d",&suel);
		if (suel>2000)
		{
			cant1=cant1+1;
			I++;
			
		}
		else
		{
			cant2=cant2+1;
			I++;
		}
	}
	printf("%d personas ganan mas de $2000 y %d ganan menos de $2000",cant1,cant2);
	return 0;
}
