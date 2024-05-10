#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    stack<int>st;
    q.push(3);
    q.push(7);
    q.push(10);
    q.push(13);
    q.push(8);
    q.push(5);
    q.push(4);
    int n;
    cout<<"enter the kth element index from which queue will reversed:";
    cin>>n;
    for(int i=0;i<n;i++){
        st.push(q.front());
        q.pop();
    }
    int k=q.size();
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(k--){
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
   
}