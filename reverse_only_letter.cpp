 #include<iostream>
 #include<string>
 #include<vector>
using namespace std;

    string reverseOnlyLetters(string str) {
        cout<<"into the fun"<<endl;
        cout<< str<<endl;
        int s = 0;
        int e = str.size() - 1;
        while (s <= e) {
            if (isalpha(str[s]) && isalpha(str[e]) ) {
                swap(str[s], str[e]);
                cout<< str<<endl;
                s++;
                e--;
            } else if (isalpha(str[s])) {
                s++;
                cout<< str<<endl;
                 

            } else if (isalpha(str[e])) {
                e--;
                cout<< str<<endl;
            }
        }
        cout<<"going out of the fun"<<endl;
        cout<< str<<endl;
        return str;
    }

int main(){
    string str = { "ab-cd"};
    cout<<" going to fun"<<endl;
    string ans= reverseOnlyLetters(str);
    cout<<"complete the fun"<<endl;
    cout<< ans<< endl;
    
    return 0;
} 