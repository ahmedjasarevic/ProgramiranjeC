#include <stdio.h>
int whitespace (char *s){
    int i=0;
while (*s != '/0'){
if (*(s+i)=='\t' || *(s+i)=='\n')
{

 *(s+i) = ' ';
 int j = i+1;
 while (*(s+j)==' ' || *(s+j)=='\t' || *(s+j)=='\n')
j++;



}
}
}
int main (){

char s[]= "\nAhmed/n jasare/tvic";
whitespace(s);
printf("%s", whitespace(s));
}

