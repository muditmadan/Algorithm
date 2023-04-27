#include <bits/stdc++.h>
using namespace std;
int powe(int x,int y){
    if(y==0){
        return 1;
    }
    return x*powe(x,y-1);
}
int main() 
{
    int a,b;
    cin>>a;
    cin>>b;
    cout << powe(a,b) << endl;
    return 0;
}