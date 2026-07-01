#include<stdio.h>
#include<stdlib.h> //标准通用工具库头文件
#include<stdbool.h> //布尔类型支持头文件
#include<string.h> //字符串处理函数头文件
#include<time.h> //时间与日期处理头文件
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_LEN 32

char wordList[MAX_WORDS][MAX_LEN];
int totalWords = 0;

void startGame();
int isWordGuessed(char target[],char guessed[]);

int main(){
    srand(time(NULL));

    printf("Number of words:");
    if (scanf("%d", &totalWords)!=1 || totalWords<=0){
        printf("Invalid number of words.n");
        return 1;
    }

    for (int i=0; i<totalWords;i++){
        printf("Enter word: ");
        scanf("%s",wordList[i]);
    }

    char playAgain='y';
    while (playAgain=='y' || playAgain=='Y'){
        startGame();
        printf("\nDo you want to play again (y/n)?");
        scanf(" %c",&playAgain);
    }
    return 0;
}

void startGame() {
    // 随机选择一个单词
    int index = rand() % totalWords;
    char target[MAX_LEN];
    strcpy(target, wordList[index]);

    int len = strlen(target);
    char currentDisplay[MAX_LEN];
    
    // 初始化显示状态为全下划线
    for(int i=0; i<len; i++) currentDisplay[i] = '_';
    currentDisplay[len] = '\0';

    int lives = 5;
    int gameOver = 0;
    int won = 0;

    printf("\n--- New Game Started ---\n");

    while (!gameOver) {
        // 显示当前状态
        printf("Word: ");
        for(int i=0; i<len; i++) printf("%c ", currentDisplay[i]);
        printf("\n");

        // 检查是否已经全部猜对
        if (strcmp(currentDisplay, target) == 0) {
            won = 1;
            break;
        }

        printf("Guess (%d lives): ", lives);
        char input[MAX_LEN];
        scanf("%s", input);

        int inputLen = strlen(input);

        // 情况 A: 玩家猜的是整个单词
        if (inputLen > 1) {
            if (strcmp(input, target) == 0) {
                won = 1;
                // 更新显示以便最后打印完整单词
                strcpy(currentDisplay, target); 
                break;
            } else {
                printf("Wrong word! You lose a life.\n");
                lives--;
            }
        } 
        // 情况 B: 玩家猜的是单个字母
        else {
            char guessChar = tolower(input[0]);
            int found = 0;
            
            // 遍历目标单词查找该字母
            for (int i = 0; i < len; i++) {
                if (target[i] == guessChar && currentDisplay[i] == '_') {
                    currentDisplay[i] = guessChar;
                    found = 1;
                }
            }

            if (!found) {
                printf("Letter not in word!\n");
                lives--;
            }
        }

        // 检查生命值
        if (lives <= 0) {
            gameOver = 1;
        }
    }

    // 游戏结束结算
    printf("Word: ");
    for(int i=0; i<len; i++) printf("%c ", currentDisplay[i]);
    printf("\n");

    if (won) {
        printf("Correct! You won!\n");
    } else {
        printf("Game Over! The word was: %s\n", target);
    }
}
