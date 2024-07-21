// 좋아하는 영화를 네이버에서 찾아 아래 값 입력하여 영화 제목과 함께 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) { 
	int year;
	char a;
	float b;
	short c;

	printf("********************\n");
	printf("* 202404002 강지수 *\n");
	printf("********************\n\n");

	printf("[영화정보입력]\n");

	printf("개봉연도:"); // 개봉연도를 입력합니다.
	scanf("%d", &year);

	printf("장르:"); // 장르를 입력합니다.
	scanf(" %c", &a);

	printf("평점(네이버기준):"); // 평점을 입력합니다.
	scanf("%f", &b);

	printf("상영시간:"); // 상영시간을 입력합니다.
	scanf("%hd", &c);
	
	printf("\n\"마녀\"\n");
	printf(" - %d년 개봉\n", year);
	printf(" - 장르: %c\n", a);
	printf(" - 평점: %.2f\n", b);
	printf(" - %hd분 상영", c);

	return 0;
}
