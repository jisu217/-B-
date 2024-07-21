// HW2: 계좌관리 - 사용자의 계좌를 관리하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

// 구조체 정의
struct ACCOUNT {
    char name[100]; // 이름: 문자열 name
    int number; // 계좌번호: 정수형 number
    int amount; // 계좌잔고: 정수형 amount
};

// 학번, 이름 출력 함수
void printInfo() {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n\n");
}

// 첫번째 단계 - 계좌등록
struct ACCOUNT regist() {
    struct ACCOUNT acc;
    printf("[계좌등록]\n");
    printf("이름: ");
    scanf_s("%99s", acc.name, (unsigned)_countof(acc.name));

    // 랜덤으로 계좌 번호 생성
    srand((unsigned int)time(NULL));
    acc.number = rand() % 10000; // 0부터 9999 사이의 랜덤 숫자 생성

    printf("[%d]계좌잔고:", acc.number);
    scanf_s(" %d", &acc.amount);

    while (getchar() != '\n');
    return acc;
}

// 두번째 단계 - 메뉴 보여주기
void menu() {
    printf("[MENU]\n");
    printf("1.입금\n");
    printf("2.출금\n");
    printf("3.잔액\n");
    printf("종료는 0\n");
}

// 두번째 단계 - 메뉴 1. 입금
void deposit(struct ACCOUNT* acc) {
    printf("입금액:");
    int deposit_amount;
    scanf_s(" %d", &deposit_amount);
    acc->amount += deposit_amount;

    printf("\n%s님(계좌:%d) 잔액:%d\n", acc->name, acc->number, acc->amount);
    while (getchar() != '\n');

    Sleep(2000);
    system("cls");
}

// 두번째 단계 - 메뉴 2. 출금
void withdraw(struct ACCOUNT* acc) {
    printf("출금액:");
    int withdrawal_amount;
    scanf_s(" %d", &withdrawal_amount);

    if (acc->amount >= withdrawal_amount) {
        acc->amount -= withdrawal_amount; // 출금액 만큼 잔고에서 빼기
        printf("출금성공!\n");
    }
    else {
        printf("잔액부족!\n");
    }

    printf("%s님(계좌:%d) 잔액:%d\n", acc->name, acc->number, acc->amount);
    while (getchar() != '\n');

    Sleep(2000);
    system("cls");
}

// 두번째 단계 - 메뉴 3.잔액 보여주기
void report(struct ACCOUNT* acc) {
    printf("%s님(계좌:%d) 잔액:%d\n", acc->name, acc->number, acc->amount);
    while (getchar() != '\n');

    Sleep(2000);
    system("cls");
}

void processChoice(int choice, struct ACCOUNT* acc) {

    switch (choice) {

    case 1: // 입금
        deposit(acc);
        break;
    case 2: // 출금
        withdraw(acc);
        break;
    case 3: // 잔액
        report(acc);
        break;
    case 0: // 세번째 단계 - 종료
        printf("[[[프로그램 종료]]]\n");
        return;
    default:
        printf("***잘못입력하였습니다***\n");
        Sleep(2000);
        system("cls");
        break;
    }
}

int main(void) {

    printInfo(); // 학번, 이름 출력
    struct ACCOUNT acc = regist(); // 계좌 등록
    system("cls");

    int choice;

    do {
        menu();
        choice = _getch() - '0';
        system("cls");
        processChoice(choice, &acc);
    } while (choice != 0);

    return 0;
}
