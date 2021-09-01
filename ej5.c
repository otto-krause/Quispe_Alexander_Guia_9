#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,p,npot=1,c=1;
	printf("Ingrese numero base:");
	scanf("%i",&n);
	printf("Ingrese numero potencial:");
	scanf("%i",&p);
	while(c<=p){
		npot=npot*n;
		c++;
	}
	printf("Resultado: %i",npot);
}
