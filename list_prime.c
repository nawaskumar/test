#include <stdio.h>

int main() {
int N, i, j;
printf("Enter the value of N : ");
scanf("%d", &N);
printf("Prime numbers between 1 and %d are : \n", N);
for (i = 2; i <= N; i++) {
    for (j = 2; j <= i; j++) {
        if (i % j == 0) {
            break;
            }
        }
    if (i == j) {
        printf("%d, ", i);
    }
    }
return 0;
}