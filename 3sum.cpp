#include<iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

   void print_arr( vector<int> arr ){
     cout<<"printing the arrey"<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] << " ";
    }
   }

    vector<vector<int>> threeSum(vector<int>& nums) {
        int a, b, c;
        vector<vector<int>> ans;
        print_arr(nums);
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        print_arr(nums);

        for (a = 0; a < nums.size() - 2; a++) {
            for (b = a + 1; b < nums.size() - 1; b++) {
                for (c = b + 1; c < nums.size(); c++) {
                    int sum = 0;
                    sum = (nums[a] + nums[b] + nums[c]);
                    if (sum == 0 && a != b && a != c && b != c) {
                        vector<int> ps;
                        ps.push_back(nums[a]);
                        ps.push_back(nums[b]);
                        ps.push_back(nums[c]);
                        ans.push_back(ps);
                    }
                }
            }
        }
        return ans;
    }

int main(){

    vector<int>  nums = {-1,0,1,2,-1,-4};
    //cout<< threeSum(nums)<< endl;
    vector<vector<int>> vect = threeSum(nums);

     for (int i = 0; i < vect.size(); i++)  
    { 
        for (int j = 0; j < vect[i].size(); j++) 
        { 
            cout << vect[i][j] << " "; 
        }     
        cout << endl; 
    } 
    
    return 0;
}