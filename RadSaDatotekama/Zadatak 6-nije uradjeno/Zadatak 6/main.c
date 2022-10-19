#include <stdio.h>
#include <stdlib.h>

int main()
{
 char nazivpredmeta[50];
    int brojpredmeta,predmet;


   FILE* ulaz = fopen ("predmeti.txt", "r");
   if (ulaz == NULL){
    printf("Otvaranje datoteke ispiti.txt nije uspjelo");
    return 1;
   }
   printf("Unesite naziv predmeta: ");
   scanf("%s", &nazivpredmeta);

   while (fscanf(ulaz, "%s %d\n", &predmet, &brojpredmeta)==2) {
    if (predmet==nazivpredmeta) {
        printf("Predmet postoji");
}
else {
    printf("Predmet ne postoji");
}
}

return 0;
}

