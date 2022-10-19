#include <stdio.h>
int stepen(double b, int e)
{
int rezultat=1;
for (e; e>0; e--)
{
rezultat = rezultat * b;
}
return rezultat;
}
int main(){
    int b,e;
printf("Unesite bazu: ");
scanf("%d", &b);
printf("Unesite eksponent: ");
scanf("%d", &e);
int rezultat = stepen(b, e);
printf("Rezultat je: %d", rezultat);
return 0;
}
