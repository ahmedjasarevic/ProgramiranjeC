#include <stdio.h>

int main()
{
    float n,r;
    int zadnjeTriCifre;
    int q;
    printf("Unesite realni broj n: ");
    scanf("%f", &n);
    n=n*1000;
q=(int)n;
    zadnjeTriCifre = (int) q % 1000;
    q = q / 1000;

printf("%d.%d", zadnjeTriCifre,q);

}
