#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j,fakt;
    double suma=0, x,clan;
    printf("Unesite broj x; ");
    scanf("%lf", &x);
    do{
        printf("Unesi broj clanova sume: ");
        scanf("%d", &n);
    } while (n>=1);
    for (i=1; i<=n; i++){
    fakt = 1;
    for(j=2; j<=i; j++)
        fakt *= j;
    clan = fakt / pow(x,i);
    suma -= clan;
    }
    printf("Suma iznosi; %g\n", suma);
}
