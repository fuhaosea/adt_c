
int my_select(int size,int nums[]){
    for (int item = 0;item < size -1  ;item++){
        for(int tem = item;tem < size ;tem++){
            if(nums[tem] < nums[item]){
                int b = nums[tem];
                nums[tem] = nums[item];
                nums[item] = b;
            }
        }
    }

    return 0;
}