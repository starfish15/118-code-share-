#include <stdio.h>

void yes(int num);
void no(int num);

int main(){
    int day,fog,car_num,last_num;
    scanf("%d %d %d",&day,&fog,&car_num);
    last_num = car_num % 10;

    if(day < 6){
        if(fog < 200){
            no(last_num);
        }else if (fog >= 200 && fog < 400){
            switch (day){
            case 1:if(last_num == 1 || last_num == 6){
                yes(last_num);
            }else{
                no(last_num);
            }
                break;
            case 2:if(last_num == 2 || last_num == 7){
                yes(last_num);
            }else{
                no(last_num);
            }break;
            case 3:if(last_num == 3 || last_num == 8){
                yes(last_num);
            }else{
                no(last_num);
            }break;
            case 4:if(last_num == 4 || last_num == 9){
                yes(last_num);
            }else{
                no(last_num);
            }break;
            default:if(last_num == 5 || last_num == 0){
                yes(last_num);
            }else{
                no(last_num);
            }
            }
        }else{
            if(day % 2 != 0){
                if(last_num % 2 != 0){
                    yes(last_num);
                }else{
                    no(last_num);
                }
            }else{
                if(last_num % 2 == 0){
                    yes(last_num);
                }else{
                    no(last_num);
                }
            }
        }
        
        
    }else{
        no(last_num);
    }
    return 0;
}

void yes(int num){
    printf("%d yes",num);
}

void no(int num){
    printf("%d no",num);
}