#include <stdio.h>
int uporedi(const char *s1, const char *s2){
while (*s1 != '/0' && *s2 != '/0'){
    if (*s1 < *s2) return -1;
    if (*s1 > *s2) return 1;
    s1++; s2++;

}
if (*s1 != '/0') return 1;
if (*s2 != '/0') return -1;




}


int main()
{
   char s1[]= "ahmed";
     char s2[]= "jasarevic";

uporedi(s1,s2);
printf("%d", uporedi(s1,s2));
}
