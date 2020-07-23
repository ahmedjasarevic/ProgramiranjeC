#include <stdio.h>
#include <stdlib.h>

int main()
{
    int niz[100];
    int i,j;
    printf("Unesi proizvoljan broj cijelih brojeva(-1 za kraj): ");
    for(i=0; i<100; i++){
    scanf("%d", &niz[i]);
    if (niz[i]== -1)
        break; }
        j=i;
         for(i=0; i<j; i++){

if(niz[i] % 5 == 0)
{printf("%d je djeljiv sa 5\n", niz[i]);
}
if(niz[i] % 7 == 0)
{printf("%d je djeljiv sa 7\n", niz[i]);
}
if(niz[i] % 11 == 0)
{printf("%d je djeljiv sa 11\n", niz[i]);
}
}
}

