#include <stdio.h>
#include <stdlib.h>

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
            C[i]=A[i]*A[i]+3*B[i]+1;
        }
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
