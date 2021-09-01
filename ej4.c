#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,c=1,fact=1;
	printf("Ingresar un numero:");
	scanf("%i",&n);
	while(c<=n){
		fact=fact*c;
		c++;
	}
	printf("Factorial es: %i",fact);
	
}
