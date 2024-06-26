#include<iostream>
using namespace std;

void heapify(int arr[],int &n,int &i){
    int larg =i;
    int leftidx=i*2;
    int rightidx=i*2 +1;
    if(leftidx<n && arr[larg]<arr[leftidx]){
        larg=leftidx;
    }
    if(rightidx<n && arr[larg]<arr[rightidx]){
        larg=rightidx;
    }
    if(larg!=i){
        swap(arr[i],arr[larg]);
        heapify(arr,n,larg);
    }
    

}

int main(){
    int arr[7]={-1,66,78,55,34,60,24};
    int n=6 ;
     for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
     }

     cout<<"after heapify every posi. arr will be "<<endl;
     for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
     }cout<<endl;
    
    
    return 0;
}