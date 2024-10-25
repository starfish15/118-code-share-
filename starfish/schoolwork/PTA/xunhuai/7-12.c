#include <stdio.h>
int main(){
    int N,num1,num2,check;
    scanf("%d",&N);
    for(int i = 0;i < N;i++){
        for(int j = 0;j < 4;j++){
            scanf(" %c-%c",&num1,&num2);
            check = num1 - num2;
            switch(check){
                case -19:
                    printf("1");
                    break;
                case -18:
                    printf("2");
                    break;
                case -17:
                    printf("3");
                    break;
                case -16:
                    printf("4");
                    break;
            }
        }
    }
    return 0;
}
