// 넓이, 높이, 문자를 입력받아 넓이 X 높이 문자로 채워진 사각형 그리기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n\n");

    char letter; // 변수를 선언합니다.
    int width;
    int height;

    printf("넓이와 높이, 문자를 입력:");
    scanf(" %d %d %c", &width, &height, &letter); // 입력 값을 각 변수에 저장합니다.

    for (int i = 0; i <= height - 1; i++) {

        for (int j = 0; j <= width - 1; j++)
        {
            printf("%c", letter);
        }
        printf("\n");
    }
    
    return 0;
} //main-end
