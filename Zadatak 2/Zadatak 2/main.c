#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,istibroj;
    int najmanji,srednji,najveci;
    int max= 200 ;

    printf("Unesite tri broja: ");
    scanf("%d %d %d", &a,&b,&c);
    if (a,b,c <=50 || a,b,c >= 200)
    {
        printf("Svi brojevi nisu iz intervala od 50 do 200");
        return 0;
    }
     if (a>b) {
      srednji=a;
      najmanji=b;
   } else {
      srednji=b;
      najmanji=a;
   }
   if (srednji>c) {
      najveci=srednji;
      if(najmanji>c){
         srednji=najmanji;
         najmanji=c;
      }else {
         srednji=c;
      }
   }else najveci=c;
   if (a == b && b != c) {
    istibroj=2;}
    else if (c==a && a !=b)
        {istibroj=2;}
    else if (b == c && b != a)
    {istibroj=2;}
    else if (a == b && b == c && a == c)
{istibroj=1; }





        printf("Brojevi poredani po velicini glase: %d %d %d \n", najmanji,srednji,najveci);

      if (istibroj == 2)
      {printf("Unesena su %d razlicita broja", istibroj);  }
     else
     {
         printf("Unesen je %d razlicit broj", istibroj);
     }



}
