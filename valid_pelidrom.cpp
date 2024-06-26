#include <iostream>
#include <string>

using namespace std;
char convtolow(char ch)
{
    char ans;
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        ans = ch - 'A' + 'a';
    }
    return ans;
}

bool isPalindrome(string s)
{

    string temp;
    for (int i = 0; i < s.length(); i++)
    {
        cout << "i: " << i << endl;
        if (isalnum(s[i]))
        {
            temp.push_back(convtolow(s[i]));
            cout << temp << endl;
        }
    }

    cout << s << endl;
    cout << temp<<endl;
       int st=0;
        int e=temp.size()-1;
        while(st<=e){
            if(temp[st]==temp[e]){
                st++;
                e--;
            }
            else{
                return 0;
            }
        }
     return 1; 
}


int main()
{
    string str = {"A man, a plan, a canal: Panama"};
    cout<< isPalindrome(str);

    return 0;
}