#include <stdio.h>
void Prekopiraj (const int *izvor, int *odrediste)
{
    int i,vel;
    for(i=0; i<vel; i++)
    {
        odrediste[i] = izvor[i];
    }

}
int main()
{
    int i,vel;
    int izvor[100],odrediste[100];
    printf("Unesite velicinu niza: ");
    scanf("%d", &vel);
    printf("Unesite elemente niza(izvor): ");
    for(i=0; i<vel; i++)
    {
        scanf("%d", &izvor[i]);
    }
    Prekopiraj(izvor,odrediste);


    printf("\nNiz izvora:");
    for(i=0; i<vel; i++)
    {
        printf("%d\n", izvor[i]);
    }

    printf("\nNiz odrediste:  ");
    for(i=0; i<vel; i++)
    {
        printf("%d\n", odrediste[i]);
    }
}
