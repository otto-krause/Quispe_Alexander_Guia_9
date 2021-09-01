#include <stdio.h>
#include <stdlib.h>
int main(){
	int n0=0, n1=0;
	printf("Ingrese 2 numeros:");
	scanf("%i %i",&n0,&n1);
	if (n0<n1){
		while(n0+1<n1){
			printf("%i ",n0+1);
			n0++;
		}
	}else{
		while(n1+1<n0){
			printf("%i ",n1+1);
			n1++;
		}
	}
	return 0;
}
