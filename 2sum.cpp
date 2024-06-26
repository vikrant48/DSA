#include <iostream>
using namespace std;

void print_arr(vector<int> arr)
{
    cout << "printing the arrey" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int binsrch(vector<int> &arr, int key)
{
    int k;
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            k = mid;
        }
        else if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return k;
}
vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> ans;
    // this will give TLE:
    // for(int i=0;i<numbers.size();i++){
    //     for(int j=i+1;j<numbers.size();j++){
    //         if(numbers[i]+numbers[j]==target){
    //             ans.push_back(i+1);
    //             ans.push_back(j+1);
    //         }
    //     }
    // }
    for (int i = 0; i < numbers.size(); i++)
    {
        int key = target - numbers[i];
        int j = binsrch(numbers, key);
        if (numbers[i] + numbers[j] == target)
        {
            ans.push_back(i + 1);
            ans.push_back(j + 1);
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> res = twoSum(nums ,target);
    cout<< print_arr(res);<<endl;
    return 0;
}