#include <stdio.h>
#include <string.h>
int main(){
    char character[50];
    int i,t = 0,cnt = 1;
    scanf("%s",character);

    for(i = 0;i < strlen(character);i++){
        if((character[i] >= 97 && character[i] <= 122) || (character[i] >= 65 && character[i] <= 90)){
            for(int j = 0;j < t - 1;j++){
                printf("%c",character[i - cnt]);
            }
            t = 0;
            cnt = 1;
            printf("%c",character[i]);
        }else{
            t = t * 10 + (int)character[i] - 48;
            cnt++;
        }
    }

    if((int)character[i - 1] >= 48 && (int)character[i - 1] <= 57){
        for(int j = 0;j < t - 1;j++){
            printf("%c",character[i - cnt]);
        }
    }
    printf("\n");

    return 0;
}