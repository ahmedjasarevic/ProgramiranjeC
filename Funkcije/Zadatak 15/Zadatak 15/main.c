#include <stdio.h>
int obrnut(int cb){
int zadnjaCifra,noviB=0;
while(cb != 0){
    zadnjaCifra=cb%10;
    noviB=noviB*10+zadnjaCifra;
    cb/=10;
}
return noviB;


}
int main(){
    int obrn;
    printf("12345\n");
obrn=obrnut(12345);
printf("%d", obrn);

}
