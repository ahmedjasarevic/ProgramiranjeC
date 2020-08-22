#include <stdio.h>

struct Kruznica {
float poluprecnik;
}k;

float povrsinaKruznice (float p){
struct Kruznica ;
p=k.poluprecnik*k.poluprecnik*3.14;
return p;
}
int main(){
struct Kruznica k;
 float r;
     printf("unesi r:");
     scanf("%f",&r);
     printf("za poluprecnik %.1f",r);
printf("Povrsina je: %f", povrsinaKruznice(r));

}
