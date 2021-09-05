#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont1 = 1, cont2 = 1, numV = 0, acuV = 0, big = 0, bigF = 0, acuVFinal = 0, dia = 0;
    while (cont1 <= 20) {
        while (cont2 <= 15) {
            printf("Ingrese ventas del vendedor %d en el dia %d: ", cont1, cont2);
            scanf("%d", &numV);
            acuV = acuV + numV;
            if (numV > big) {
                big = numV;
            }
            numV = 0;
            cont2++;
        }
        cont2 = 0;
        printf("El vendedor %d vendio en total %d unidades\n", cont1, acuV);
        acuVFinal = acuVFinal + acuV;
        acuV = 0;
        if (big > bigF) {
            bigF = big;
            dia = cont1;
        }
        big = 0;
        cont1++;
    }
    printf("El Total de unidades vendidas fue de: %d\nEl vendedor con una mayor venta diaria fue el: Vendedor %d\n", acuVFinal, dia);
    return 0;
}
