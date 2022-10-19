#include<stdio.h>
#include<conio.h>

int main()
{
    char ime[20];
    char prezime[20];
    int br_tel;
    int opcija;

    FILE* ulaz = fopen("imenik.txt", "w");

    if (ulaz == NULL)
    {
        printf("Greska.\n");
        return 1;
    }
    printf("Unesi ime:\n");
    scanf("%s", ime);
    fprintf(ulaz, "Ime  = %s\n", ime);

    printf("Unesi prezime:\n");
    scanf("%s", prezime);
    fprintf(ulaz, "Prezime  = %s\n", prezime);

    printf("Unesi broj telefona:\n");
    scanf("%d", &br_tel);
    fprintf(ulaz, "br_tel  = %.2d\n", br_tel);

printf("Pritisnite 1 za ispis: ");
scanf("%d", &opcija);
if (opcija == 1){
    printf("Ime - %s, Prezime - %s, Br_tel - %d", ime,prezime,br_tel);

}
else
{

return 0;
}
}
