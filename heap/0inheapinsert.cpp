#include <iostream>
#include <algorithm>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void inserttoheap(int data)
    {
        // index of last
        size = size + 1;
        int index = size;
        /*parent index=index/2 , left child=index*2  ,right child=index*2+1  */
        // insert at last
        arr[index] = data;
        // to currect position
        while (index > 1)
        {
            int parentindex = index / 2;                              
            if (arr[parentindex] < arr[index])
            {
                swap(arr[parentindex], arr[index]);
                index = parentindex;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
            
        }
        cout << endl;
    }
    void deletefromheap(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
        }
        // step1 put last elemnet as root node
        swap(arr[1],arr[size]);
        print();
        //step2 remove last element 
        size--;
        print();
        //step 3 putting root to its original position
        int i=1;
        while(i<size){
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex<size && arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
            }
            else if(rightindex<size && arr[i]<arr[rightindex]){
                swap(arr[i],arr[rightindex]);
            }
            else{
                return;     
            }
        }
        print();

    }
};

int main()
{
    Heap h;
    h.inserttoheap(66);
    h.inserttoheap(78);
    h.inserttoheap(55);
    h.inserttoheap(34);
    h.inserttoheap(24);
    h.inserttoheap(60);
    h.print();
    cout << endl;
    h.deletefromheap();
    h.print();   

    return 0;
}