 #include<iostream>
 #include<string>
 #include<vector>
using namespace std;


 bool pali( string str){
        int  s=0;
        int e=str.size()-1;
        while(s<=e){
            if(str[s]==str[e]){
                s++;
                e--;
                }
                else{
                return 0;
                }
            }
        return 1;    
    }
int main(){
    vector<string > words = {"abc","car","ada","racecar","cool"};
        string ans;
        for(int i=0;i<words.size();i++){
            if(pali(words[i])==1){
                ans=words[i];
                break;
            }
            else {
                ans={};
            }  
        }
        cout<< ans<<endl;
    
    return 0;
}