#include <stdio.h>
<<<<<<< HEAD
char* velika(char* string)
{
 char* prvi=string;
 while(*string != '\0')
 {
 if(*string>='a' && *string<='z')
 *string = (*string) - 32;
string++;
 }
 return prvi;
}
int main() {


char s[]= "Ovo je primjer";
printf("%s", velika(s));
=======
#define vel 100

void sortiraj(float* pok, int velicina)
{
    int i,j,min;
    float temp;
    while (pok < velicina ){
        *pok *= 100;
        *pok= (int)(*pok+ 0.05);
        *pok++ /= 100;
    }
for (i=0; i<velicina; i++){
    min=i;
    for(j=i+1; j<velicina; j++){
        if (pok[j] < pok[min])
            min = j;
    }
    temp = pok[i];
    pok[i]=pok[min];
    pok[min]=temp;

}


}
int main()
{
 float niz[vel];
 int i=0;
 printf("Unesite elemente niza (-1) za kraj unosa:");
 do
 {
 scanf("%f", &niz[i]);
i++;
 } while(niz[i-1]!=-1 && i<vel);
sortiraj(&niz[0], --i);
 int j;
 for(j=0; j<i; j++)
 printf("%.2f ", niz[j]);
 return 0;
>>>>>>> Pokazivaci/master
}
