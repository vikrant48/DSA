 #include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //making a node with data and null address
    // constructure 
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    // create a new node node* temp = new node(data)
    // distructur
    ~node(){
        // memory free 
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }

    }
};
void insertathead( node* &head ,int data){
    node* temp= new node(data);
    temp->next = head;
    head= temp;
}
void inserattail( node* &head ,int data ){
    node* temp = new node(data);
    node* tail= head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next=temp;
    tail = temp;

}

 void insertatposition(node* &head ,int data,int position ){
    //
    if(position==1){
        insertathead(head ,data);
        return;

    }
      node* temp = new node(data);
      node* curr = head;
      for(int i=1;i<position-1;i++){
        curr=curr->next;
      }
    // this is also currect
    //   node* frd=curr->next;
    //   curr->next=temp;
    //   temp->next=frd;
    temp->next=curr->next;
    curr->next=temp;
 }

 void deletenode(node* head, int position){
    // delete fist node 
    if(position==1){
        node* temp = head;
        head=head->next;
        temp-> next=NULL;
        delete temp;

    }
    // delete others 
    else{
        node* curr=head;
        node* prev = NULL;
        int cnt =1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        // pointing to next node 
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;


    }
 }
void print(node* &head){
    // if(head = NULL ){
    //     cout<<"list is empty "<< endl;
    //     // return ;
    // }
    node*temp=head;
    while(temp != NULL){
        cout << temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int main(){
    node* n1= new node(5);
    //cout<< n1->data<<endl;
    //cout<< n1->next<<endl;
    node* head = n1;
    print(head);
    insertathead(head , 10);
    print(head);
    insertathead(head , 20);
    print(head);
    inserattail(head, 6);
    print(head);
    inserattail(head, 7);
    print(head);
    insertathead(head , 67);
    print(head);
    insertatposition(head,98,1);
    print(head);
    deletenode(head ,3);
    print(head);
    

    
    return 0;
}