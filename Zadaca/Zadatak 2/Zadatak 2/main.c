#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, istibroj;
    int najmanji, srednji, najveci;

    printf("Unesite tri broja: ");
    scanf("%d %d %d", &a,&b,&c);

    if (a <50 || a> 200 || b <50 || b> 200 || c <50 || c> 200 ) {
        printf("Svi brojevi nisu iz intervala od 50 do 200");
        return 0;
    }

    if (a > b)
    {
        srednji=a;
        najmanji=b;
    }
    else
    {
        srednji=b;
        najmanji=a;
    }
    if (srednji > c)
    {
        najveci=srednji;
        if(najmanji>c)
        {
            srednji=najmanji;
            najmanji=c;
        }
        else
        {
            srednji=c;
        }
    }
    else najveci=c;

    //doovdje

    if (a == b && b != c)
    {
        istibroj=2;
    }
    else if (c==a && a !=b)
    {
        istibroj=2;
    }
    else if (b == c && b != a)
    {
        istibroj=2;
    }
    else if (a == b && b == c && a == c)
    {
        istibroj=1;
    }
    else if (a != b && b != c && a != c)
    {
        istibroj=3;
    }



    printf("Brojevi poredani po velicini glase: %d %d %d \n", najmanji,srednji,najveci);

    if (istibroj == 2 || istibroj == 3){
        printf("Unesena su %d razlicita broja", istibroj);
    }
    else if (istibroj == 1 ){
        printf("Unesen je %d razlicit broj", istibroj);
    }




}
