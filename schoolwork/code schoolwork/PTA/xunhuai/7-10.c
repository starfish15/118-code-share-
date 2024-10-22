#include <stdio.h>
int main(){
    int num;

    for(int cnt = 0;;cnt++){
        scanf("%d",&num);
        if(num == 250){
            printf("%d",num);
            break;
        }
    }
    return 0;
}