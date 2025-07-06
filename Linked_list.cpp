#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
class list{
 public:
  node*head;
  node*tail;
  list(){
    head=tail=NULL;
  }
 void push_front(int data){
    node* newnode=new node(data);
    if(head==NULL){
        head=tail=newnode;
        return;
    }else{
        newnode->next=head;
        head=newnode;
    }
  }
  void push_back(int data){
    node* newnode=new node(data);
    if(head==NULL){
        head=tail=newnode;
    }else{
       tail->next=newnode;
       tail=newnode;
    }
  }
void pop_back(){
    node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    delete tail;
    tail=temp;
    temp->next=NULL;
}
void pop_front(){
    if(head==NULL){
        return;
    }else{
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
}
void insert(int val, int pos){
    node* temp=head;
    for(int i=0; i<=pos-1; i++){
        temp=temp->next;
    }
    node* newnode= new node(val);
    newnode->next=temp->next;
    temp->next=newnode;
}
void search(int val){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==val){
           cout<<"val is found"<<endl;
          return;
        }
        temp=temp->next;
        cout<<"val is not found"<<endl;
       return;
    }
}
void lenght(){
    int idx=0;
    node*temp=head;
    while(temp!=NULL){
        idx++;
        temp=temp->next;
    }
    cout<<idx;
}
void reverse(){
    node*prev=NULL;
    node*curr=head;
    node*next=NULL;
    while(curr!=NULL){
        next=curr->next; 
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    head=prev;
}
void middle(){
        node*temp=head;
        int ctn=0;
        while(temp!=NULL){
            temp=temp->next;
            ctn++;
        }
       int ans=ctn/2;
       temp=head;
      for(int i=0; i<ans; i++){
        temp =temp->next;
       }
       cout << "Middle index: " << ans << endl;
       cout << "Middle element: " << temp->data << endl;

    }
  void print(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
  }
};
int main(){
    list ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);
    ll.push_back(60);
    ll.push_back(70);
    ll.pop_front();
    ll.insert(34,4);
    ll.print();
    ll.search(70);
    ll.lenght();
    ll.reverse();
    ll.print();

}