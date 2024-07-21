// 현재 통장 잔고, 월급, 고정 지출을 입력받아 다음 달 예상 통장 잔고를 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n\n");

    long long int bank; // 변수를 선언합니다.
    int salary;
    int expense;
    int result;

    printf("현재 통장 잔고:"); // 현재 통장 잔고를 입력합니다.
    scanf(" %lld", &bank);

    printf("월급:"); // 월급을 입력합니다.
    scanf(" %d", &salary);

    printf("고정지출:"); // 고정 지출을 입력합니다.
    scanf(" %d", &expense);

    result = bank + salary - expense; // 다음 달 예상 통장 잔고 = 현재 통장 잔고 + 월급 - 고정 지출
    "%lld + %d - %d = %d", bank, salary, expense, result;
    printf("다음 달 예상 통잔 잔고:" "%d,%03d", result / 1000, result % 1000); // 다음 달 예상 통장 잔고를 출력합니다.

    return 0;
}
