#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year;
	char a;
	float b;
	short c;

	printf("********************\n");
	printf("* 202404002 ������ *\n");
	printf("********************\n\n");

	printf("[��ȭ�����Է�]\n");

	printf("��������:"); //���������� �Է��մϴ�.
	scanf("%d", &year);

	printf("�帣:"); // �帣�� �Է��մϴ�.
	scanf(" %c", &a);

	printf("����(���̹�����):"); //������ �Է��մϴ�.
	scanf("%f", &b);

	printf("�󿵽ð�:"); //�󿵽ð��� �Է��մϴ�.
	scanf("%hd", &c);


	printf("\n\"����\"\n");
	printf(" - %d�� ����\n", year);
	printf(" - �帣: %c\n", a);
	printf(" - ����: %.2f\n", b);
	printf(" - %hd�� ��", c);

	return 0;
}
