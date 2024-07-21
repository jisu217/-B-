// Lab9_5.c: 사각형 그리기

#include <stdio.h>

void drawRect(char l, int w, int h);

int main() {
    int width, height;
    char letter;
    
    printf("가로와 세로:");
    scanf(" %d %d", &width, &height);
    
    printf("문자:");
    scanf(" %c", &letter);
    
    drawRect(letter, width, height);
}

void drawRect(char l, int w, int h) {
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++)
        printf("%c", l);
        
        printf("\n");
    }
}
