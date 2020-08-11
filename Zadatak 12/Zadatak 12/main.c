#include <stdio.h>
#define vel 100
void zaokruzi(float* pok, int velicina)
{
 int i;
 float temp;
 for(i=0; i<velicina; i++)
 {
*(pok+i) = *(pok+i) + 0.05;
temp=(int)(*(pok+i)*10);
 *(pok+i)=temp/10.;
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
 } while(niz[i]!=-1 && i++<vel);
zaokruzi(&niz[0], i);
 int j;
 for(j=0; j<i; j++)
 printf("%1f\n", niz[j]);
 return 0;
}
