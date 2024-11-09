#include <stdio.h>
#include <string.h>
int main(){
    int max = 0,check = 0,end = 0;
    char character[101],answer[100];
    for(int j = 0;j < 200;j++){
        for(int i = 0;i < 201;i++){
            scanf("%[^\n]",character);
		    getchar(); 
            if(strstr(character,"***end***")){
                end = 1;
                break;
            }else if(max < strlen(character)){
                    max = strlen(character);
                    for(int k = 0;k < max;k++){
                        answer[k] = character[k];
                    }
                }
            
        }
        if(end == 1){
            break;
        }
    }
    printf("%d\n",max);
    for(int i = 0;i < max;i++){
        printf("%c",answer[i]);
    }

    return 0;
}