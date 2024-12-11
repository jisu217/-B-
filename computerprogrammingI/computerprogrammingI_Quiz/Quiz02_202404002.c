// 16진수로 입력받아 8진수 10진수로 출력
    
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n");

    int data16;

    printf("16진수 입력:");
    scanf("%x", &data16); // data16 변수에 2진수로 저장

    printf("23의 8진수:%o \n", data16); // 저장된 변수를 %o를 사용해서 8진수로 나타냄
    printf("23의 10진수:%d \n", data16); // 저장된 변수를 %d를 사용해서 10진수로 나타냄

    printf("저장된 변수의 크기:% dbyte", sizeof(data16));

    return 0;
}
