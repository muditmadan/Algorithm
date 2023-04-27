#include <bits/stdc++.h>
using namespace std;


int main() 
{
  int n;
  cin >> n;
  int i=1;
  while(n>0){
    if(n-i<=0){
        cout<<"Patlu"<<endl;
        break;
    }
    n=n-i;
    if(n-2*i<=0){
        cout<<"Motu"<<endl;
        break;
    }
    n=n-2*i;
    i++;
  }
  return 0;
}