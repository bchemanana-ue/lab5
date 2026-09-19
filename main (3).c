#include <stdio.h>

int main(void)
{
    int n;
    int max_count = 100;
    int count = 0;
    int pcount = 0;
    long long sum = 0;
    while (count < max_count) {
    printf("Enter n (-1000..1000): ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        break;
}
    if (n == 0) {
    break;
}
    if (n < -1000 || n > 1000) {
        printf("Range error\n");
        return 1;
}
    count++;
    sum += n;
    int i=1;
    if (n > 0) {
        pcount++;
}
}
    printf("Sum = %d\n", sum);
    printf("Count = %d\n", count);
    printf("Pcount = %d\n", pcount);
   
    return 0;
}