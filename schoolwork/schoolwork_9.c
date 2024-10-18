#include <stdio.h>
int main(){
    int year,month;
    scanf("%d %d",&year,&month);

    switch (month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("31");
        break;
    case 4:
    case 6:
    case 9:
    case 11:printf("30");
        break;
    default:if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("29");
    }else{
        printf("28");
    }
    }
    return 0;
}