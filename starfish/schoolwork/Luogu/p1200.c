#include <stdio.h>
#include <string.h>
int main(){
    char ufo[7],team[7];
    memset(ufo,'A',sizeof(ufo));
    memset(team,'A',sizeof(team));
    int n1 = 1,n2 = 1;

    scanf("%s",ufo);
    getchar();
    scanf("%s",team);
    for(int i = 0;i < 6;i++){
        n1 = n1 * (ufo[i] - 64);
    }
    for(int i = 0;i < 6;i++){
        n2 = n2 * (team[i] - 64);
    }
    if(n1 % 47 == n2 % 47){
        printf("GO");
    }else{
        printf("STAY");
    }

    return 0;
}