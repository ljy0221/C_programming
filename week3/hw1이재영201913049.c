/*
    완성
    printf함수를 사용할때는 반드시 줄바꿈(\n)을 사용하는걸 생활화 해야겠습니다.
*/

#include <stdio.h>

int main()
{
    int x;
    int y;
    
    x = 50;
    y = x + 7000;

    printf("1. 자기 소개\n");
    printf("안녕하세요. 201913049 이재영입니다.\n");
    printf("앞으로 잘 부탁드립니다.\n");
    printf("열심히 공부하겠습니다.\n");
    printf("2. 두 수의 합 = %d", y);

    return 0;
}