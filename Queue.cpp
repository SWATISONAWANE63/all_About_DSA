// #include<iostream>
// using namespace  std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         next=NULL;
//     }
// };
// class queue{
//     node*head;
//     node*tail;
//     public:
//     queue(){
//         head=tail=NULL;
//     }
//     void push(int data){
//          node* newnode= new node(data);
//         if(empty()){
//             head=tail=newnode;
//         }else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     void pop(){
//         if(empty()){
//             cout<<"LL is empty.";
//             return;
//         }else{
//             node* temp=head;
//             head=head->next;
//             delete temp;
//         }
//     }
//    int front(){
//      if(empty()){
//         cout<<"LL is empty";
//         return 0;
//      }
//      return head->data;
//     }
//     bool empty(){
//         return head==NULL;
//     }    
// };
// int main(){
//     queue q;
//     // q.push(10);
//     // q.push(20);
//     // q.push(30);
//     // q.push(40);
//     // while(!q.empty()){
//     //     cout<<q.front()<<endl;
//     //    q.pop();     
//     // }
//     // cout<<endl;
//     // cout<<q.front();//gives the front ele of queue
//     // q.pop();
//     // while(!q.empty()){
//     //     cout<<q.front()<<endl;
//     //    q.pop();     
//     // }
//     // cout<<endl;
//     cout<<q.empty();
   
//     return 0;

// }


//circular queue
// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     //constructor for node
//     node(int data){
//         this->data=data;
//         next=NULL;
//     }
// };
// class circularLL{
//     node*head;
//     node*tail;
//      public:
//     circularLL(){
//         head=tail=NULL;
//     }
   
//     void push(int data){
//         node* newnode=new node(data);
//             if(empty()){
//                 head=tail=newnode;
//             }else{
//                tail->next=newnode;
//                tail=newnode;
//             }
//         }
    
//     void pop(){
//         node*temp=head;
//         head=head->next;
//         delete temp;


//     }
//     int front(){
//         return head->data;

//     }
//     bool empty(){
//       return head ==NULL;

//     }
    
// };
// int main(){
//     circularLL cc;
//     cc.push(10);
//     cc.push(20);
//     cc.push(30);
//     while(!cc.empty()){
//         cout<<cc.front();
//         cc.pop();

//     }

// }

// #include<iostream>
// using namespace std;
// class circularQueue{
   
//     int *arr;
//     int currsize, capicity;
//     int frontIdx, rear;
//     public:
//     circularQueue(int size){
//         capicity=size;
//         currsize=0;
//         arr=new int [capicity];
//         frontIdx=0;
//         rear=-1;
        
// }

//     void push(int data){
//             if(currsize==capicity){
//                 cout<<"cQ is full";
//                 return;
//             }
//             rear=(rear+1)%capicity;
//             arr[rear]=data;
//             currsize++;
//         }
//         void pop(){
//             if(empty()){
//                 cout<<"cQ is empty";
//                 return ;
//             }
//             frontIdx=(frontIdx+1)%capicity;
//             currsize--;
//         }
//         int front(){
//             return arr[frontIdx];
//         }
//         bool empty(){
//             return currsize==0;
//         }
        
//         void print(){
//             for(int i=0; i<capicity; i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
        

//     }
// };
// int main(){
//     circularQueue cq(3);
//     cq.push(1);
//     cq.push(2);
//     cq.push(3);
//     cq.print();


//     return 0;

// }