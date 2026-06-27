#include <stdio.h>

int main(){
    char letter;
    
    printf("Enter a character:");
    scanf("%c",&letter);

    printf("The ASCII value of '%c' is %d\n",letter,letter);
    
    return 0;
}