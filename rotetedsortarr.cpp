   #include<iostream>
   #include<vector>
  using namespace std;

    
  int getpivot(vector<int>& nums){
        int s=0;
        int n=nums.size();
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[s]){
                s =mid+1;
            }
            else{
                e=mid;
            }
            int mid=s+(e-s)/2;
        }
        return s;
    }

    int binearysearch(vector<int>& nums, int start, int end,int target){
        int s=start;
        int e=end;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            int mid=s+(e-s)/2;
        }
         return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int pivot=getpivot(nums);

        if(nums[pivot]<=target && target<=nums[nums.size()-1]){
            return binearysearch(nums,pivot,nums.size()-1,target);

        }
        else

        return binearysearch(nums,0,pivot-1,target);
      
        
    }
  
  int main(){
    vector<int> nums;
    nums[0]=7;
    nums[1]=8;
    nums[2]=9;
    nums[3]=1;
    nums[4]=3;
    nums[5]=5;
    search(nums,0);
    return 0;
  }
  
 