//Two Sum program 
#include <stdio.h>
 #include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int* ret=(int *)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if((nums[i]+nums[j])==target)
            {
                ret[0]=i;
                ret[1]=j;
                *returnSize=2;
            }
        }
    }
    //printf("[%d,%d]",returnSize[0],returnSize[1]);
    return ret;
}
