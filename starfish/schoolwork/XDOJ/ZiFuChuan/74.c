#include <stdio.h>
#include <string.h>
int main(){
    char character[50];
    int cnt1 = 0,cnt2 = 0,cnt3 = 0,i,end = 0,t = 0;
    int n1,n2,n3;
    scanf("%[^\n]",character);

    for(i = 0;i < strlen(character);i++){
        if(character[i] == '('){
            cnt1++;
            n1 = 1;
            n2 = 0;
            n3 = 0;            
            for(int j = i + 1;j < strlen(character);j++){    
                if(character[j] == ')'){
                    n1--;
                }else if (character[j] == ']'){
                    n2--;
                }else if (character[j] == '}'){
                    n3--;
                }else if (character[j] == '('){
                    n1++;
                }else if (character[j] == '['){
                    n2++;
                }else if (character[j] == '{'){
                    n3++;
                }
                if(n1 == 0 || n2 < 0 || n3 < 0){
                    if(n2 != 0 || n3 != 0){
                        end = 1;
                    }
                    break;
                }    
            }
        }else if (character[i] == ')'){
            cnt1--;
        }

        if(character[i] == '['){
            cnt2++;
            n1 = 0;
            n2 = 1;
            n3 = 0;            
            for(int j = i + 1;j < strlen(character);j++){    
                if(character[j] == ')'){
                    n1--;
                }else if (character[j] == ']'){
                    n2--;
                }else if (character[j] == '}'){
                    n3--;
                }else if (character[j] == '('){
                    n1++;
                }else if (character[j] == '['){
                    n2++;
                }else if (character[j] == '{'){
                    n3++;
                }
                if(n2 == 0 || n1 < 0 || n3 < 0){
                    if(n1 != 0 || n3 != 0){
                        end = 1;
                    }
                    break;
                }    
            }
        }else if (character[i] == ']'){
            cnt2--;
        }

        if(character[i] == '{'){
            cnt3++;
            n1 = 0;
            n2 = 0;
            n3 = 1;            
            for(int j = i + 1;j < strlen(character);j++){    
                if(character[j] == ')'){
                    n1--;
                }else if (character[j] == ']'){
                    n2--;
                }else if (character[j] == '}'){
                    n3--;
                }else if (character[j] == '('){
                    n1++;
                }else if (character[j] == '['){
                    n2++;
                }else if (character[j] == '{'){
                    n3++;
                }
                if(n3 == 0 || n1 < 0 || n2 < 0){
                    if(n2 != 0 || n1 != 0){
                        end = 1;
                    }
                    break;
                }    
            }
        }else if (character[i] == '}'){
            cnt3--;
        }

        if(end == 1){
            break;
        }
    }

    /*printf("i:%d\nlength:%d\n",i,strlen(character));
    printf("cnt:%d %d %d\n",cnt1,cnt2,cnt3);
    printf("n:%d %d %d\n",n1,n2,n3);
    printf("end:%d\n",end);*/

    if(i == strlen(character)){
        if(cnt1 == 0 && cnt2 == 0 && cnt3 == 0){
            printf("yes");
        }else{
            printf("no");
        }
    }else{
        printf("no");
    }

    return 0;
}