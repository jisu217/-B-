// HW1_2: 숫자야구게임 (상수값으로 미리 저장한 BALL에 있는 숫자를 사용자가 맞추는 게임)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n\n");

    // 변수 선언
    int computerball[3]; // 컴퓨터가 생성한 숫자를 저장하는 배열
    int userball[3]; // 사용자가 입력한 숫자를 저장하는 배열
    int i, j; // 반복문을 위한 카운터 변수
    int temp; // 중복된 숫자를 체크를 위한 변수
    int count = 1; // 시도 횟수를 저장하는 변수
    int strike; // 스트라이크 수를 저장하는 변수
    int ball; // 볼 수를 저장하는 변수
    int out = 0; // 아웃 수를 저장하는 변수
    int gameover = 0; // 게임 종료 여부를 저장하는 변수

    // 랜덤 
    srand((unsigned)time(NULL));

    for (i = 0; i < 3; i++) {
        temp = rand() % 10;
        computerball[i] = temp;
        
        for (j = 0; j < i; j++)
            if (temp == computerball[j]) {
                i--;
                break;
            }
    }

    printf("[숫자야구게임]\n\n");
    printf("숫자 입력\n");

    while (count <= 9 && !gameover) {

        // 첫 번째 숫자 입력
        while (1) {
            if (scanf("%d", &userball[0]) != 1 || userball[0] < 0 || userball[0] > 9) {
                printf("잘못입력하였습니다.\n");
            }
            else {
                break;
            }
        }

        // 두 번째 숫자 입력
        while (1) {
            if (scanf("%d", &userball[1]) != 1 || userball[1] < 0 || userball[1] > 9) {
                printf("잘못입력하였습니다.\n");
            }
            else {
                break;
            }
        }

        // 세 번째 숫자 입력
        while (1) {
            if (scanf("%d", &userball[2]) != 1 || userball[2] < 0 || userball[2] > 9) {
                printf("잘못입력하였습니다.\n");
            }
            else {
                break;
            }
        }

        // 사용자로부터 입력받은 숫자에 중복을 확인
        if (userball[0] == userball[1] || userball[0] == userball[2] || userball[1] == userball[2]) {
            printf("잘못입력하였습니다.\n");
            continue;
        }

        strike = 0;
        ball = 0;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                if (userball[i] == computerball[j])
                    if (i == j)
                        strike++;
                    else
                        ball++;

        // 결과 출력
        if (strike == 3) {
            printf("\n[[[게임종료]]]\n");
            gameover = 1; // 게임 종료 상태로 변경
        }
        else {
            printf("%d번째 결과: %dstrike\t%dball\t%dout\n\n", count, strike, ball, out);
        }
        count++;

        if (!gameover && count <= 9)
            printf("숫자 입력\n");
    }

    if (!gameover && count > 9)
        printf("실패!!!\n");

    return 0;
}
