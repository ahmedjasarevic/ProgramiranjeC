#include<stdio.h>
#include<conio.h>

int main()
{
    char ime[20];
    char prezime[20];
    int br_tel;
    int opcija;

    FILE* ulaz = fopen("imenik.txt", "wb");

    if (ulaz == NULL)
    {
        printf("Greska.\n");
        return 1;
    }
    printf("Unesi ime:\n");
    scanf("%s", ime);
    printf("Unesi prezime:\n");
    scanf("%s", prezime);
    printf("Unesi broj telefona:\n");
    scanf("%d", &br_tel);
    fwrite(ime,sizeof(ime),1,ulaz);
    fwrite(prezime,sizeof(prezime),1,ulaz);
    fwrite(&br_tel,sizeof(br_tel),1,ulaz);
fclose(ulaz);

FILE* ulaz1 = fopen("imenik.txt", "rb");

    if (ulaz1 == NULL)
    {
        printf("Greska.\n");
        return 1;
    }
    printf("Unesite 1 za ipis;");
    scanf("%d", &opcija);
    if (opcija == 1) {
    fread(ime,sizeof(ime),1,ulaz);
    fread(prezime,sizeof(prezime),1,ulaz);
    fread(&br_tel,sizeof(br_tel),1,ulaz);
    printf("Ime = %s\n", ime);
    printf("Prezime = %s\n", prezime);
    printf("Br. telefona = %d", br_tel);
}
else {
    return 0;
}
}
