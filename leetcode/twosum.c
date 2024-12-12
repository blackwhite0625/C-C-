#include <stdio.h>
#include <stdlib.h>

int* twosum(int* nums,int numsize,int target,int* resultsize){
    for(int i = 0;i<numsize;i++){
        for(int j = i+1;j<numsize;j++){
            if(nums[i]+nums[j] == target){
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *resultsize = 2;
                return result;
            }
        }
    }
    *resultsize = 0;
    return NULL;
}
int main(){
    int nums[] = {2,7,11,15};
    int target = 9;
    int resultsize = 0;
    int* result = twosum(nums,4,target,&resultsize);

    if(resultsize == 2){
        printf("索引為: %d,%d\n",result[0],result[1]);
    }else{
        printf("未找到符合條件的數字 \n");
    }
    free(result);
    return 0;
}