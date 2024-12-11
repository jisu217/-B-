// 넌센스 퀴즈 게임

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 학번/이름 출력 함수
void myinfo() {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n\n");
}

typedef struct quiz { // 문제와 답을 저장
    char question[100]; // 질문저장
    char solution[100]; // 답 저장
} QUIZ;

int main() {
    myinfo(); // 학번/이름 출력 함수 호출

    // 사용자로부터 답을 입력받아 정답인지 아닌지 보여주기
    QUIZ quizzes[3] = {
        {"별 중에 가장 슬픈 별은?", "이별"},
        {"진짜 새의 이름은 무엇일까요?", "참새"},
        {"고기 먹을 때마다 따라오는 개는?", "이쑤시개"}
    };

    char user_answer[100];

    for (int i = 0; i < 3; i++) {
        printf(" %s", quizzes[i].question);
        fgets(user_answer, sizeof(user_answer), stdin);
        user_answer[strcspn(user_answer, "\n")] = 0;

        if (strcmp(user_answer, quizzes[i].solution) == 0) {
            printf("정답!\n");
        }
        else {
            printf("땡!정답은 %s\n", quizzes[i].solution);
        }
    }
    return 0;
}
