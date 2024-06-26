#include <iostream>

using namespace std;
int check(int nums[],int i ){
   
        int ans =0;
    
        for(int j=0;j<8;j++){
            if(nums[j]==i){
                ans++;
            }
                
        }
     
   return ans; 
}

int main()
{
   
    int nums[8] ={4,3,6,7,8,7,3,1};
    
      for (int i=1;i<=8;i++){
       cout<<"the ferq of number "<< i <<" is "<< check(nums,i)<<endl;
       if (check(nums,i)==2){
        cout<<i<<endl;
      }
        
      }
      
       
        
        
        

    return 0;
}