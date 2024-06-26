 #include<iostream>
using namespace std;

    int mySqrt(int x) {
       int s=0;
        int e=x;
        int ans;
         int mid=s+(e-s)/2;
        while(s<=e){

          int square=mid*mid;
            if(square==x){
                ans=mid;
            }
            else if(square<x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
        
    }

int main(){
    cout<<"enter the number to find squarerrot of that number "<<endl;
    int x;
    cin>>x;
   cout<<"the squre root of  number x is " <<mySqrt(x) <<endl;
    
    return 0;
}