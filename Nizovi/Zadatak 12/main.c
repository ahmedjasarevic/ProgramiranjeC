#include <stdio.h>
int main()
{
    int i;
    float A[5];
    for(i=0; i<5; i++)
    {
        printf("Unesite %d elemenat niza A: ", i+1);
        scanf("%f", &A[i]);
    }
    float B[5];
    for(i=0; i<5; i++)
    {
        printf("Unesite %d elemenata niza B: ", i+1);
        scanf("%f", &B[i]);
    }



    float C[5];
    for(i=0; i < 5; i++)
    {
        {
            C[i]=A[i]*2+B[i];
        }
    }


    printf("Ispis niza A: ");
    for(i=0; i < 5; i++)
    {
        printf("%.2f ", A[i]);
    }
    {
        printf("\n");
    }




    printf("Ispis niza B: ");
    for(i=0; i < 5; i++)
    {
        printf("%.2f ", B[i]);
    }
    {
        printf("\n");
    }


    printf("Ispis niza C: ");
    for(i=0; i < 5; i++)
    {
        printf("%.2f ", C[i]);
    }
    {
        printf("\n");
    }
}

