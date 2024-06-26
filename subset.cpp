 #include<iostream>
 #include<vector>
using namespace std;

void solve (vector<int> nums, int index,vector<int> output, vector<vector<int>>& ans){
      //base case
      if(index >=nums.size());
      ans.push_back(output);
      return;

      //exclude 
      solve (nums, output , index+1,ans);

      //include
      int element = nums[index];
      output.push_back(element);
      solve (nums, output , index+1,ans);




}
 vector<vector<int>> subset( vector<int> nums){
    int index=0;
    vector<int> output;
    vector<vector<int>> ans;

    solve(nums,index,output,ans);
    return ans;
 }

int main(){
    vector<int> nums{2,3,4,57,67};

    subset(nums);

    return 0;
}