#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(11);
    s.push(12);
    while(!s.empty()){
        cout<<s.top()<<endl;
    }
    return 0;
}
