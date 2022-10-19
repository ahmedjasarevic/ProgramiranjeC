#include <stdio.h>
int samoglasnici (char* string)
{
 int brojac=0;
 while(*string != '\0')
 {
 if(*string=='a' || *string=='e'
|| *string=='i' || *string=='o'
|| *string=='u' || *string=='A'
|| *string=='E' || *string=='I'
|| *string=='O' || *string=='U')
brojac++;
string++;
 }
 return brojac;
}


int main()
{
    char rijec[100];
    printf("Unesite rijec: ");
    scanf("%s", rijec);
samoglasnici(rijec);
printf("%d", samoglasnici(rijec));
}
