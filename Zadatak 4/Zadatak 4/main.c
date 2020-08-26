#include <stdio.h>
#include <stdlib.h>


int main()
{
    char c;
   int samoglasnika=0,brojrijeci=0,brojredova=0,brojcifara=0,brojznakova=0;
    FILE*  ulaz = fopen("ulaz.txt", "r");
    if (ulaz == NULL){
        printf("Otvaranje datoteke ulaz.txt nije uspjelo");
        return 1;
    }
    while ((c = fgetc(ulaz)) != EOF){
       if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
          c == 'A' || c == 'E' || c == 'I' || c == 'O' ||c == 'U' )
          samoglasnika++;
       if ( c == ' ')
        brojrijeci++;
       if (c == '\n')
            brojredova++;
       if (c == '1' || c == '2'|| c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
        brojcifara++;
        if (c == EOF)
            break;
        ++brojznakova;
        }
             fclose(ulaz);
printf("Ukupno %d samoglasnika\n", samoglasnika);
printf("Broj rijeci je %d\n", brojrijeci);
printf("Broj redova je %d\n", brojredova);
printf("Broj cifara je %d\n", brojcifara);
printf("Broj znakova je %d\n", brojznakova);
 }



