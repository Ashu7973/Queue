#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={1,5,2,3,7};
    int n=5,k;
    cout<<"enter the value of k";
    cin>>k;
    queue<int>q;
    for(int i=0;i<n;i++){
        q.push(i);
    }
    int time=0;
    while(arr[k]!=0){
         arr[q.front()]--;
         if(arr[q.front()]){
            q.push(q.front());

         }
         q.pop();
         time++;
    }
    cout<<"The required time to buy the ticket by "<<k<<" is"<<time;
}