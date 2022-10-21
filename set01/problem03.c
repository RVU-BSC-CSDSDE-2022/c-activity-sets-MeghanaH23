#include <stdio.h>
sum_calc(int x, int y, int *sum);

int main(void) {
    int x,y,sum;gcc main++
    printf(enter the first number\n");
    scanf("%d",&x);
    printf(enter the second number\n");
    scanf("%d", &y);
    sum_calc(x,y , &sum);
    printf("sum is&d",sum);
}
gcc