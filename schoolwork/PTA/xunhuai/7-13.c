#include <stdio.h>
int main(){
    int N,sex,height,weight,std_height,std_weight;
    scanf("%d",&N);

    for(int i = 0;i < N;i++){
        scanf("%d %d %d",&sex,&height,&weight);
        if(sex == 1){
            std_height = 130;
            std_weight = 27;
        }else{
            std_height = 129;
            std_weight = 25;
        }
        
        if(height > std_height){
            printf("ni li hai!");
        }else if(height < std_height){
            printf("duo chi yu!");
        }else{
            printf("wan mei!");
        }

        if(weight > std_weight){
            printf(" shao chi rou!\n");
        }else if(weight < std_weight){
            printf(" duo chi rou!\n");
        }else{
            printf(" wan mei!\n");
        }
    }
    return 0;
}