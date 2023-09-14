class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)
            return ;
        int ind1=-1,ind2=0;
        int i;
        // finding the first index from last whose value is less then the next value
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
        }
        // 5 4 3 2 1 case in which ind1=-1 
        //so in that case only we have to reverse the permutation
        if(ind1<0)
            reverse(nums.begin(),nums.end());
        else{
            // finding the index of next largest element then nums[ind1] for swapping 
            for(i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[ind1]){
                    ind2=i;
                    break;
                }
            }
        swap(nums[ind1],nums[ind2]);
        reverse(nums.begin()+ind1+1,nums.end());
        }
        
    }
};