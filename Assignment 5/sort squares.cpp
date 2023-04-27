#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={-6,-3,-1,2,4,5};
    int n=v.size();
    multiset<int> s;
    for(int i=0;i<n;i++){
        int a=v[i]*v[i];
        s.insert(a);
    }
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
}