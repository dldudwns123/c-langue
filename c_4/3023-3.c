#include <stdio.h>

int main()
{
    int x, y, result;
    scanf("%d %d", &x, &y);

    printf("%d\n", x * (y%10));
    printf("%d\n", x * (y/10%10));
    printf("%d\n", x * (y%100));
    printf("%d", x * (y%10));

    return 0;




}