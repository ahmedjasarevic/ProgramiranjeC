#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    int i,j;
    printf("NIZ A\n");
    printf("Unesi proizvoljan broj cijelih brojeva \n (Maksimalan broj elemanta je 10)(-1 za kraj): ");
    for(i=0; i<10; i++){
    scanf("%d", &A[i]);
    if (A[i]== -1)
        break; }
        int B[10];
                printf("NIZ B\n");
    printf("Unesi proizvoljan broj cijelih brojeva\n(Maksimalan broj elemanta je 10)(-1 za kraj): ");
    for(i=0; i<10; i++) {
    scanf("%d", &B[i]);
    if (B[i] == -1)
    break;
}
int C[10];
for(i=0; i<10; i++){
{
    C[i]=A[i]+B[i];
}

}


printf("Ispis niza C: ");
    for(i=0; i < C[i]; i++)
    {
        printf("%d ", C[i]);
    }
    {
        printf("\n");
}    }
