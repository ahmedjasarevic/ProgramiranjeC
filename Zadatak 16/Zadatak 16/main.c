#include <stdio.h>
#define vel 15
void unos(char* string)
{
 int i = 0;
 char c;
 do
 {
c = getchar();
string[i] = c;
i++;
 }
 while(c != '\n' && i < vel);
string[i - 1] = '\0';
}
void rot13(char *string)
{
 while(*string!='\0')
 {
 if((*string>='A' && *string<='M') || (*string>='a' && *string<='m'))
 *string+=13;
 else if ((*string>='N' && *string<='Z') || (*string>='n' && *string<='z'))
 *string-=13;
string++;
 }
}
int main()
{
 char rijec[vel];
 printf("Unesite rijec do 15 znakova (ENTER za kraj): ");
unos(rijec);
rot13(rijec);
 printf("%s", rijec);
 return 0;
}
