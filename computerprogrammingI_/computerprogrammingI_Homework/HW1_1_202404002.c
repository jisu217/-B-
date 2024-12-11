// HW1_1: 카페 키오스크 (사용자로부터 메뉴와 수량, 지불할 돈을 입력받고 영수증에 주문내역과 총 금액과 잔돈을 출력하는 프로그램)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_ORDERS 100

int main(void) {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n\n");

    // 변수와 배열을 선언
    char names[MAX_ORDERS][20]; // 상품명을 저장하는 배열
    int quantities[MAX_ORDERS]; // 수량을 저장하는 배열
    int prices[MAX_ORDERS];     // 가격을 저장하는 배열
    int order_sequence[MAX_ORDERS]; // 주문이 들어온 순서를 저장하는 배열
    int choice = 0; // 상품명을 저장하는 변수
    int amount = 0; // 수량을 저장하는 변수
    int get_money = 0; // 지불할 금액을 저장하는 변수
    int money_total_count = 0; // 주문 받은 메뉴의 총 금액을 저장하는 변수
    int change = 0; // 거스름 돈을 저장하는 변수
    int num_orders = 0; // 현재 주문 수를 저장하는 변수

    // 메뉴 출력
    printf("\t[Cafe Menu]\n");
    printf("1. 아메리카노\t2,500\n");
    printf("2. 카페라떼\t3,300\n");
    printf("3. 바닐라라떼\t4,200\n");
    printf("4. 녹차라떼\t3,700\n");
    printf("5. 스    콘\t4,500\n");
    printf("6. 치아바타\t3,400\n\n");
    printf("* 메뉴와 수량을 모두 입력해주세요.\n");
    printf("* 종료는 -1 입력\n");

    // 메뉴와 수량 입력
    while (1) {
        scanf("%d", &choice);
        if (choice == -1) {
            printf("[[[[주문종료]]]]]\n"); break;
        }
        scanf("%d", &amount);
        if (amount <= 0) {
            printf("* 잘못 입력하였습니다. *\n"); continue;
        }

        switch (choice) {
        case 1: strcpy(names[num_orders], "아메리카노"); prices[num_orders] = 2500; break;
        case 2: strcpy(names[num_orders], "카페라떼"); prices[num_orders] = 3300; break;
        case 3: strcpy(names[num_orders], "바닐라라떼"); prices[num_orders] = 4200; break;
        case 4: strcpy(names[num_orders], "녹차라떼"); prices[num_orders] = 3700; break;
        case 5: strcpy(names[num_orders], "스    콘"); prices[num_orders] = 4500; break;
        case 6: strcpy(names[num_orders], "치아바타"); prices[num_orders] = 3400; break;
        default: printf("* 잘못 입력하였습니다. *\n"); continue;
        }
        
        quantities[num_orders] = amount;
        order_sequence[num_orders] = num_orders + 1; //주문이 들어온 순서를 저장
        num_orders++;
    }

    for (int i = 0; i < num_orders; i++) {
        money_total_count += prices[i] * quantities[i];
    }

    // 총 금액 출력 및 지불할 돈 입력
    printf("\n총 금액:%d,%03d원\n", money_total_count / 1000, money_total_count % 1000);

    do {
        printf("지불할 돈:");
        scanf("%d", &get_money);
    } while (get_money < money_total_count);

    change = get_money - money_total_count;

    // 영수증 출력
    printf("\n\t[영수증]\n");
    printf("-----------------------------------\n");
    printf("상 품 명\t금 액\t수 량\n");
    printf("-----------------------------------\n");
    for (int i = 0; i < num_orders; i++) {
        printf("%d.%s\t%d,%03d원\t%d개\n", order_sequence[i], names[i], prices[i] / 1000, prices[i] % 1000, quantities[i]);
    }
    printf("-----------------------------------\n");
    printf("총  금액:\t%d,%03d원\n", money_total_count / 1000, money_total_count % 1000);
    printf("받은금액:\t%d,%03d원\n", get_money / 1000, get_money % 1000);
    printf("거스름돈:\t%d,%03d원\n", change / 1000, change % 1000);

    return 0;
}
