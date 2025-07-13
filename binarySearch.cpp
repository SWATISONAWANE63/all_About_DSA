#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int>v,int num){
    int n=v.size();
    int s=0, e=n;
    int mid=(s+e)/2;
    while(s<e){
        if(v[mid]==num){
            return mid;
        }else if(v[mid]>num){
            e=mid-1;
        }else if(v[mid]<num){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
}
int main(){
    vector<int>v={1,2,3,4,5};
    int idx=binary(v,1);
    cout<<"idx of target value 1 is at :"<<idx<<endl;
    int idx2=binary(v,2);
    cout<<"idx of target value 2 is at :"<<idx2<<endl;
    int idx3=binary(v,3);
    cout<<"idx of target value 3 is at:"<<idx3<<endl;
    int idx4=binary(v,4);
    cout<<"idx of target value 4 is at :"<<idx4<<endl;
     int idx5=binary(v,5);
    cout<<"idx of target value 5 is at :"<<idx5<<endl;
}
