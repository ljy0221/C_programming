#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("숫자 입력: ");
    scanf("%d", &x);
    y = x + 100;

    printf("%d", y);

    return 0;
}