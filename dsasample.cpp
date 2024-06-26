a#include <iostream>
using namespace std;

int main()
{
    // int a;
    char ch;
    cout << "enter from keyboard" << endl;
    cin >> ch;
    /*if(a>0 ){
         cout<<"this is positive number"<<endl;
     }*/
    if (ch > 64 && ch < 91)
    {
        cout << "this is upper case " << endl;
    }
    else if (ch > 96 && ch < 113)
    {
        cout << "this is lower case" << endl;
    }

return 0;
}
