#include <bits/stdc++.h>
using namespace std;
void sortstack(stack<int>& st){
    if(st.size()==0){
        return;
    }
    int a=st.top();
    st.pop();
    sortstack(st);
    stack<int> tempstack;
    while(!st.empty() && st.top()>a){
        tempstack.push(st.top());
        st.pop();
    }
    st.push(a);
    while(!tempstack.empty()){
        st.push(tempstack.top());
        tempstack.pop();
    }
}
int main()
{
   stack<int> s,s1;
   s.push(5);
   s.push(1);
   s.push(2);
   s.push(6);
   s.push(4);
   s1=s;
   while(!s1.empty()){
    cout<<s1.top()<<endl;
    s1.pop();
   }
   sortstack(s);
   while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
   }
   return 0;
}