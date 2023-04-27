#include <bits/stdc++.h>
using namespace std;
void traverse(string str,string s){
    if(str.size()==0){
        cout<<s<<" ";
        return;
    }
    char c1=tolower(str[0]);
    char c2=toupper(str[0]);
    str=str.substr(1);

    traverse(str,s+c1);
    traverse(str,s+c2);
}
int main()
{
   string sa="ab";
   traverse(sa,"");
   return 0;
}