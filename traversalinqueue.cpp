#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(5);
    q.push(7);
    q.push(9);
    int n=q.size();
    while(n--){
        cout<<q.front()<<endl;
        q.push(q.front());
        q.pop();
    }
    cout<<q.size();
}