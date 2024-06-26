 #include<iostream>
 #include<vector>
 #include <algorithm> 
using namespace std;
    void printarr(vector<int> arr){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }

    int countones( int n ){
    // array to store binary number 
    int binaryNum[32]; 
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    }
    int count=0;
    for(int j=0;j<32;j++){
        if( binaryNum[j]==1){
            count++;
        }
    } 
    return count;
    }
    void sortByBits(vector<int>& arr) {
        
        vector<int> ans;
        vector<int> arr2;
        for(int k =0;k<arr.size();k++){
            arr2.push_back(countones(arr[k]));
        }
        vector<pair<int ,int>> A;
        for(int h=0;h<arr.size();h++){
            A.push_back(make_pair(arr2[h], arr[h]));
        }
        sort(A.begin(),A.end());
         for (int m=0; m<arr.size(); m++)
    {
        ans.push_back(A[m].second);
    }
       printarr(ans);
        
    }
int main(){
    vector<int> deci = {0,1,2,3,4,5,6,7,8};
    sort(deci.begin(),deci.end());
    sortByBits(deci);
   

    
    
    return 0;
}