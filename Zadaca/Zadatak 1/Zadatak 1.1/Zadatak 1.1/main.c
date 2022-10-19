#include <stdio.h>

int main()
{
    int a,zadnjaCifra,nazad=0;
    printf("Unesite broj: ");
    scanf("%d", &a);
    while (a != 0) {
        zadnjaCifra = a % 10;
    nazad = nazad * 10 + zadnjaCifra ;
    a /= 10; }
    printf("%d", nazad);
    return 0;
}


