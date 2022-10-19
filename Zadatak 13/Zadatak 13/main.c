#include <stdio.h>
char* velika(char* string)
{
 char* prvi=string;
 while(*string != '\0')
 {
 if(*string>='a' && *string<='z')
 *string = (*string) - 32;
string++;
 }
 return prvi;
}
int main() {


char s[]= "Ovo je primjer";
printf("%s", velika(s));
}
