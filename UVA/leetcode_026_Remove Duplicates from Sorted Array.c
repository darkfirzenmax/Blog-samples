#define MIN(a,b) (((a)<(b))?(a):(b))

int removeDuplicates(int* nums, int numsSize) {
    int i = 0,j;
    int count = MIN(1,numsSize);
    int idx = 0;
    int end = numsSize;
    for(i=1 ; i< end; i++){
    	if(nums[i-1]==nums[i]){
    		// 移動元素		
            for(j=i;j<end;j++){
                nums[j-1]=nums[j];
            }  
            end--;
            i--;
        }else{
            count++;
        } 
    }
    
    return count;
}
 