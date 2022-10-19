#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    int interval1,interval2;
    printf("Unesite brojeve a,b,c,d: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);


if (b < c || a > d)
{

printf("Skupovi se ne sijeku.");
return 0;
}



if (c>a)
{
    interval1=c;
}
else
    interval1=a;
if (b<d)
{
    interval2=b;

}
else{
    interval2=d;

   }
   printf("Rezultantni interval je [%d.%d]", interval1,interval2);
}
