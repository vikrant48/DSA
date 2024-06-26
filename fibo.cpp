 #include<iostream>
using namespace std;

int  fibo(int n){
    cout<<"n-->"<< n<< endl;
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int temp= fibo(n-1)+fibo(n-2);
    cout<<" temp-->" <<temp <<endl;
    return temp;
    
}

int main(){
    int n ;
    cin >> n ;
    int ans = fibo (n);
    cout <<ans <<endl;
    return 0;
}