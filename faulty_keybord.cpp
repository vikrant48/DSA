 #include<iostream>
 #include<string>
 #include<algorithm>
using namespace std;

    string finalString(string str) {
        //string temp=str;
        int s,e;
        for(int i=0;i<str.size();i++){
            if(str[i]=='i'){
                cout<< i <<endl;
                e=i-1;
                cout<<"e"<<e<<endl;
                cout<<str<<endl;
                s=0;
                while(s<=e){
                    swap(str[s++],str[e--]);
                    cout<< str<<endl;
                }
                str.erase(str.begin()+i);
                i--;
            }
        }
    return str;    
    }       

int main(){
    string str = {"poiinter"};
    string p = finalString(str);
    cout<< p<<endl;
    
    return 0;
}