 #include<iostream>
using namespace std;

int main(){
    int amount ;
    cout << "enter the amount "<< endl;
    cin >> amount ;
    int k=1;

    switch (k)
    {
    case 1 :{cout<< "the number of rs 100 notes : "<< (amount/100) <<endl;
             amount = amount - ((amount/100)*100);
             cout<< amount <<endl;
             cout<< "the number of rs 50 notes : "<< (amount/50) <<endl;
             amount = amount - ((amount/50)*50);
             cout<< amount <<endl;
             cout<< "the number of rs 20 notes : "<< (amount/20) <<endl;
             amount = amount - ((amount/20)*20);
             cout<< amount <<endl;
             cout<< "the number of rs 10 notes : "<< (amount/10) <<endl;
             amount = amount - ((amount/10)*10);
             cout<< amount <<endl;
            
             break;
    }

    default: cout<< "please enter valid amount "<<endl;
        break;
    
    }

    return 0;
}