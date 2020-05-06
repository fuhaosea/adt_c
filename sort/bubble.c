
int bubble(int size,int nums[]){
    int item = 0,itemm = 0;
    for(item = 0;item <= size-1 ;item++){
        for(itemm = 0;itemm < size - item - 1;itemm++){
            if(nums[itemm] > nums[itemm + 1]){
                int b = nums[itemm];
                nums[itemm] = nums[itemm + 1];
                nums[itemm + 1] = b;
            }
	    
        }
        // printf("\n%dTH THE MAX  is :%d",item,nums[top]);
       

    }
    return 0;
}