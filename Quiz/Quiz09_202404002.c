// Up & Down 게임 (컴퓨터가 1~30까지 숫자 중 랜덤하게 정한 하나의 숫자를 맞추는 게임)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CLEAR "cls"

// 학번/이름 출력문 함수
void myinfo() {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n\n");
}

// 사용자로부터 숫자를 입력받는 함수
int input() {
    int num;
    printf("선택:");
    scanf_s("%d", &num);
    return num;
}

int main() {
    srand(time(NULL)); // 난수의 시드 설정
    int random_value = rand() % 30 + 1; // 1 ~ 30까지의 난수 생성
    int input_num; // 사용자로부터 숫자 입력받는 변수

    do {
        myinfo();
        // 숫자 입력받기
        input_num = input();

        // 컴퓨터보다 사용자가 선택한 숫자가 클 때
        if (input_num > random_value) {
            printf("DOWN\n");
            fflush(stdout);
            Sleep(2500);
            system(CLEAR);
        }

        // 컴퓨터보다 사용자가 선택한 숫자가 작을 때
        else if (input_num < random_value) { 
            printf("UP\n");
            fflush(stdout);
            Sleep(2500);
            system(CLEAR);
        }

        // 사용자가 숫자를 맞췄을 때
    } while (input_num != random_value); 
      printf("END");

    return 0;
}

