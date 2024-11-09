#include <stdio.h>
#include <string.h>
void swap(int *a,int *b){
    float t;
    t = *a;
    *a = *b;
    *b = t;
}

void sort(int *num1,int length){
    for (int i = 1;i < length; i++){
        for (int j = 0;j < length - i; j++){
            if(num1[j] < num1[j + 1]){
                swap(&num1[j],&num1[j + 1]);
            }
        }
    }
}

int main(){
    int n,j = 0,max = 0,cnt = 1,num_max = 0;
    scanf("%d",&n);
    int num[n + 1];
    
    for(int i = 0;i < n;i++){
        scanf("%d",&num[i]);
        if(num_max < num[i]){
            num_max = num[i];
        }
    }
    num[n + 1] = -1;

    int count[num_max + 1];
    memset(count,0,sizeof(count));
    sort(num,n);

    for(int i = 0;i < n;i++){
        if(num[i] == num[i + 1]){
            cnt++;
        }else{
            count[num[i]] = cnt;
            if(max < cnt){
                max = cnt;
            }
            cnt = 1;
            j++;
        }
    }

    for(int i = 0;i < j;){
        for(int k = 0;k < num_max + 1;k++){
            if(count[k] == max){
                printf("%d %d\n",k,count[k]);
                i++;
            }
        }
        max--;
        if(max == 0){
            break;
        }
    }

    return 0;
}