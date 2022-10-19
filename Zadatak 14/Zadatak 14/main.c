#include <stdio.h>
int prost(int x){
    int i,brojac;
 brojac = 0;
    for (i = 2; i <= x/2; i++)
    {
  	if(x%i == 0)
  	{
        brojac++;
        break;
        }
    }
    if(brojac == 0 && x != 1 )
    {
	printf("%d\n", x);
    }
}
int main()
{
  int i;
  for(i = 1; i <= 100; i++)
  {
   prost(i);
  }
  return 0;
}
