#include <stdio.h>
#include <stdlib.h>

struct Vrijeme
{
    int sati;
    int minute;
    int sekunde;

};

struct Vrijeme unos_vremena(void)
{
    struct Vrijeme v;
    printf("Unesite vrijeme: ");
    scanf("%d%d%d", &v.sati,&v.minute,&v.sekunde);
    return v;
};
void ispisi_vrijeme (struct Vrijeme v)
{
    printf("%dsati %dminuta %dsekundi\n", v.sati,v.minute,v.sekunde);

}

int proteklo (struct Vrijeme v1, struct Vrijeme v2) {
int i,sekunde=0;
/* Sati */
sekunde += (v2.sati-v1.sati)*3600;
/* Minute */
sekunde += (v2.minute-v1.minute)*60;
/* Sekunde */
sekunde += v2.sekunde-v1.sekunde;
return sekunde;
}


int main()
{
    struct Vrijeme v1,v2;
    struct Vrijeme d1 = unos_vremena();
    ispisi_vrijeme(d1);
    struct Vrijeme d2 = unos_vremena();
    ispisi_vrijeme(d2);

printf ("Izmedju v1 i v2 je proteklo %d sekundi.\n", proteklo(v1,v2));
return 0;


}
