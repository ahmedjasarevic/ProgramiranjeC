#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,r;
    int zadnjaCifra,zadnjeTriCifre;
    int q,nazad=0,back=0;
    printf("Unesite realni broj n: ");
    scanf("%f", &n);
    n=n*1000;
q=(int)n;
    zadnjeTriCifre = (int) q % 1000;
    q = q / 1000;
    while(q != 0)
      {

        zadnjaCifra = q % 10;
    q = q / 10;
    nazad = nazad * 10 + zadnjaCifra; }
    while (zadnjeTriCifre != 0)
        {r = zadnjeTriCifre % 10;
    zadnjeTriCifre = zadnjeTriCifre / 10;
    back = back * 10 + r;}

printf("%d.%d", nazad,back);

}



