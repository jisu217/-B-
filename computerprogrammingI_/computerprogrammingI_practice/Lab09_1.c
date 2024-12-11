// Lab9_1.c: 큰 수 찾기

#include <stdio.h>

int get_integer();

int get_max(int x, int y) {
    if (x > y) return(x);
    else return(y);
}

int main() {
    int a = get_integer();
    int b = get_integer();
    
    printf("두 수 중에서 큰 수는 %d입니다.\n", get_max(a, b));
    
    return 0;
}

int get_integer(void) {
    int value;
    printf("정수를 입력하시오 : ");
    scanf("%d", &value);
    return value;
}
