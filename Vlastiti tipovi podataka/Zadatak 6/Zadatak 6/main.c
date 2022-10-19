#include<stdio.h>
struct Tacka{
double x,y;
};

struct Pravougaonik{
struct Tacka centar;
double poluprecnik;
};


double udaljenost (struct Tacka t1, struct Tacka t2) {
return sqrt ( (t1.x-t2.x)*(t1.x-t2.x)+(t1.y-t2.y)*(t1.y-t2.y));
}

}
int unutar_pravougaonika (struct Pravougaonik p,struct Tacka t){

if (udaljenost(t, p.centar) < p.poluprecnik) return 1;
return 0;

}

int Povrsina(int a, int b) {
   int Povrsina = a * b;
   return Povrsina;
}

int Obim(int a, int b){
   int Obim = 2*(a + b);
   return Obim;
}


int main()
{
    int duzina,sirina;
    printf ("Unesi duzinu: ");
 scanf ("%d",&duzina);
 printf ("Unesi sirinu: ");
 scanf ("%d",&sirina);

printf("Povrsina je: %d\n", Povrsina(duzina,sirina));
printf("Obim je: %d\n", Obim(duzina,sirina));


}



