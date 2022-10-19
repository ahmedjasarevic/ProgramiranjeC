#include <stdio.h>
int main()
{
   int n, suma = 0, zadnjaCifra;

   printf("Unesi broj: ");
   scanf("%d", &n);


   while (n != 0)
   {
      zadnjaCifra = n % 10;
      suma      = suma + zadnjaCifra;
      n         = n / 10;
   }

   printf("%d", suma);

   return 0;
}
