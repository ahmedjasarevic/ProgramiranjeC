#include <stdio.h>


int main()

{
    int a, nazad = 0, zadnjaCifra,N;
    printf("Unesi broj: ");
    scanf("%d", &a);
N=a;
  while (a != 0) {
    zadnjaCifra = a % 10;
    nazad = nazad * 10 + zadnjaCifra;
    a = a / 10;
  }

 if (N == nazad) {
        printf("1", N);
}    else {
        printf("0", N); }
}



