#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue <int> q;
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    int k;
    cout<<"Enter the size of window "<<endl;
    cin>>k;
    for(int i=0;i<k-1;i++){
        q.push(arr[i]);
    }
    for(int i=k-1;i<n;i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }
}