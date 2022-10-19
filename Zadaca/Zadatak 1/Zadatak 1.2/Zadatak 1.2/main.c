#include <stdio.h>
int main() {
    int n;
    int count = 0;
    printf("Unesi broj: ");
    scanf("%d", &n);

    while (n != 0) {
        n /= 10;
        ++count;
    }

    printf("%d", count);
}
