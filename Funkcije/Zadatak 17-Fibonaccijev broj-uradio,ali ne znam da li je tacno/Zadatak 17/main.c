#include <stdio.h>
int Fibonacci(int n) {
if( n <= 1 )
return(1);
else
return( Fibonacci( n - 1 ) + Fibonacci( n - 2 ) );
}
int main() {
    int n;
printf("Unesite broj n: ");
scanf("%d", &n);
Fibonacci(n);
printf("%d-ti Fibonaccijev broj je %d", n, Fibonacci(n));

}
