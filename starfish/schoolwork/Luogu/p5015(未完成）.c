#include <stdio.h>
#include <string.h>
int main(){
    char* input;
    int cnt = 0;
    scanf("%s",&input);
    for(int i = 0;input[i] != '\0';i++){
        if(input[i] != ' ' || input[i] != '\n'){
            cnt++;
        }
    }
    printf("%d",cnt);

    return 0;
    
}