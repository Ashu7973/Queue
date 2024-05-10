#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){
        if(q.front()<0){
            cout<<q.front()<<" 3";
            break;
        }  
        q.pop();
    }

}
int main(){
    queue <int> q;
    int arr[]={2,-3,-4,-2,7,8,9,-10};
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