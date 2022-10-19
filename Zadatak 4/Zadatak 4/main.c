#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Unesite broj n: ");
    scanf("%d", &n);


for(i=n; i>0; i--)
 {if(i % 5 == 0)
 {printf("%d\n", i); }
 else if(i % 7 == 0)
   {

printf("%d\n", i); }
    else if(i % 11 == 0)
   {

    printf("%d\n", i);
    }
 }
}
