#include <stdio.h>


int main()
{
    int n,a,zadnjaCifra;
    printf("Unesite broj n:");
    scanf("%d", &n);
    printf("Unesi broj a:");
    scanf("%d", &a);
    while (n != 0) {
        zadnjaCifra = n % 10;
    n = n / 10;

    }

    printf("%d", zadnjaCifra);
}








