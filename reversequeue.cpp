#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    stack<int>st;
    q.push(1);
    q.push(5);
    q.push(7);
    q.push(9);
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
   
}