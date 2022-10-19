#include <stdio.h>
#include <stdlib.h>

struct Osoba
{
    char ime[15];
    char prezime [20];
    int telefon;
};
struct Osoba unos_osobe[100];

void unos(struct Osoba* unos_osobe, int* vel)
{
    struct Osoba a;
    printf ("Unesite ime: ");
    scanf("%s",a.ime);
    printf ("Unesite prezime: ");
    scanf("%s",a.prezime);
    printf ("Unesite broj telefona: ");
    scanf("%d",&a.telefon);
    unos_osobe[(*vel)++]=a;

}

void ispis(struct Osoba* unos_osobe, int vel)
{
    int i;
    for (i=0; i<vel; i++)
        printf ("%d. %s %s, Tel: %d\n", i+1, unos_osobe[i].ime, unos_osobe[i].prezime,
                unos_osobe[i].telefon);
}




int main()
{
    struct Osoba imenik[100];
    int velicina=0,izbor=-1;
    while (izbor!=0)
    {
        printf ("Pritisnite 1 za unos, 2 za ispis, 0 za izlaz: ");
        scanf ("%d", &izbor);
       if (izbor == 1)
        {
            unos(imenik,&velicina); }

        else if(izbor == 2) {
            ispis(imenik,velicina);
        }
       else if(izbor == 0){
            return 0;
        }
    }
}
