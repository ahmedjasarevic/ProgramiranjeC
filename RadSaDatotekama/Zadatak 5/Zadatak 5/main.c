#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,brojpredmeta;
    int brindexa,predmet,ocjena;
    int ukupno=0,polozili=0;
    float prosjek=0;

   FILE* ulaz = fopen ("ispiti.txt", "r");
   if (ulaz == NULL){
    printf("Otvaranje datoteke ispiti.txt nije uspjelo");
    return 1;
   }
   printf("Unesite broj predmeta: ");
   scanf("%d", &brojpredmeta);

   while (fscanf(ulaz, "%d %d %d\n", &brindexa, &predmet, &ocjena)==3) {
    if (predmet==brojpredmeta) {
        prosjek+=ocjena;
    if (ocjena>=6) polozili++;
    ukupno++;
}
}
printf ("Prosjecna ocjena: %.2f\nProlaznost: %.f%%\n", prosjek/ukupno,
(float)polozili/ukupno*100);
return 0;
}





