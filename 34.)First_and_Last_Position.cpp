class Solution {
  public:
    int first(vector<int>& nums, int target,int n){
      int s=0,end=n-1,mid,ans=-1;
      while(s<=end)
      {
        mid=s+(end-s)/2;
        if(nums[mid]==target){
          ans=mid;
          end=mid-1;
        }
        else if(target>nums[mid])
          s=mid+1;
        else if(target<nums[mid])
          end=mid-1;
      }
      return ans;
  }
  int last(vector<int>& nums, int target,int n){
     int s=0,end=n-1,mid,ans=-1;
      while(s<=end)
      {
        mid=s+(end-s)/2;
        if(nums[mid]==target){
          ans=mid;
          s=mid+1;
        }
        else if(target>nums[mid])
          s=mid+1;
        else if(target<nums[mid])
          end=mid-1;
      }
      return ans;
  }
  vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>vc;
        vc.push_back(first(nums,target,nums.size()));
        vc.push_back(last(nums,target,nums.size()));
        return vc;
  }
};
