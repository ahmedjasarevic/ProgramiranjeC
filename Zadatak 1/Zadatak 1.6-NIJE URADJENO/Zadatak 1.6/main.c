#include <stdio.h>
int main() {

int n,zadnjaCifra,naopako=0;
int s1,s,s2;
printf("Unesi broj n:");
scanf("%d", &n);
while (n != 0)
{
    zadnjaCifra=n%10;
    n=n/10;

if (zadnjaCifra  % 2  == 0)
{
    s1=zadnjaCifra+1;
    printf("%d", s1);
}
else {
        s2=zadnjaCifra-1;
        printf("%d", s2);

}
}
}



