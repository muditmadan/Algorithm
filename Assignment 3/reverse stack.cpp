#include <bits/stdc++.h>
using namespace std;
void InsertatBack(stack<int> & st,int x){
    if(st.empty()){
        st.push(x);
    }
    else{
        int a=st.top();
        st.pop();
        InsertatBack(st,x);
        st.push(a);
    }
    
}
void reverse(stack<int>& st){
    if(st.size()>0){
        int x=st.top();
        st.pop();
        reverse(st);
        InsertatBack(st,x);
    }
    return;
}
int main()
{
   stack<int> s,s1;
   s.push(1);
   s.push(2);
   s.push(3);
   s1=s;
   while(!s1.empty()){
    cout<<s1.top()<<endl;
    s1.pop();
   }
   reverse(s);
   while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
   }
   return 0;
}