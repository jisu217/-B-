#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{

    printf("********************\n");
    printf("* 202404002 ������ *\n");
    printf("********************\n");


    int data16;


    printf("16���� �Է�:");
    scanf("%x", &data16); // data16 ������ 2������ ����

    printf("23�� 8����:%o \n", data16); // ����� ������ %o�� ����ؼ� 8������ ��Ÿ��
    printf("23�� 10����:%d \n", data16); // ����� ������ %d�� ����ؼ� 10������ ��Ÿ��

    printf("����� ������ ũ��:% dbyte", sizeof(data16));

    return 0;
}