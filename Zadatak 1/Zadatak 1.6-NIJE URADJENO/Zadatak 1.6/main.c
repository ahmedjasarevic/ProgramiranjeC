#include <stdio.h>
int main() {

int n,zadnjaCifra;
int s1,s2;
printf("Unesi broj n:");
scanf("%d", &n);
while (n != 0)
{
    zadnjaCifra=n%10;
    n=n/10;

if (zadnjaCifra==0 || zadnjaCifra==2 || zadnjaCifra==4 || zadnjaCifra==6 || zadnjaCifra==8)
{
    s1=zadnjaCifra+1*10;
    printf("%d", s1);
}
else {
        s2=zadnjaCifra-1*10;
        printf("%d", s2);

}
}

}



