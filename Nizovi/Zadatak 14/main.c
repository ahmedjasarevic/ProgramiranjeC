#include <stdio.h>
#include <stdlib.h>

int main()
{
    int niz[100];
    int brojaci[101]={0};
    int i,j;
    printf("Unesi proizvoljan broj cijelih brojeva od 0-100(-1 za kraj): ");
    for(i=0; i<100; i++){
    scanf("%d", &niz[i]);
    if (niz[i]== -1)
        break;
        if (niz[i]<0 || niz[i]>100){
        printf("Broj nije na intervalu od 0-100.Ponovite unos: ");
        i--;}
        }
        j=i;
         for(i=0; i<j; i++){
            if (niz[i] == niz[i]){
                brojaci[niz[i]]++;
               printf("%d se ponavlja ovoliko puta: %d\n", niz[i], brojaci[niz[i]]);
            }
               }
}


