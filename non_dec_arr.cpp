 #include<iostream>
 #include<vector>
using namespace std;

    bool checkPossibility(vector<int>& nums) {
        int count =0;
        for(int i =1;i<=nums.size();i++){
            if(nums[i-1]>=nums[i]){
                count++;
            }
            
        }
         if(count=1){
                return true;
            }
      return false;  
    }

int main()
{
    vector<int> nums;
    nums.push_back(4);
     nums.push_back(2);
      nums.push_back(1);
      cout<<checkPossibility(nums)<<endl;
       
    return 0;
}