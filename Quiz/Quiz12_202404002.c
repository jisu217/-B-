// 회원 정보

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>  

// 학번/이름 출력 함수
void myinfo() {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n\n");
}

int main(void) {
    myinfo(); // 학번/이름 출력 함수 호출

    char ID[10];
    char password[10];
    char confirmPassword[10];
    int i;

    // 사용자로부터 ID 입력받기
    printf("I      D: ");
    gets_s(ID, 10);

    // 사용자로부터 password 입력받기
    printf("password: ");
    for (i = 0; i < 9; i++) {
        password[i] = _getch();
        if (password[i] == '\r') {
            break;
        }
        printf("*");
    }
    password[i] = '\0';

    // 처음 입력했던 password를 다시 제대로 입력받을 때까지 반복
    do {
        printf("\n확    인: ");
        for (i = 0; i < 9; i++) {
            confirmPassword[i] = _getch();
            if (confirmPassword[i] == '\r') {
                break;
            }
            printf("*");
        }
        confirmPassword[i] = '\0';
    } while (strcmp(password, confirmPassword) != 0);

    // 문자열을 비교하여 일치하면 최종 회원정보 보여주기 
    printf("\n\n[회원정보]\n");
    printf("I      D: %s\n", ID);
    printf("password: %s\n", password);

    return 0;
}
