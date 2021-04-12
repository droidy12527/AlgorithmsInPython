#include<bits/stdc++.h>

using namespace std;

void solve(){
	string str;
  	cin>>str;
  for(int i=0;i<str.size();i++)
  {
      if(i==0) 
      {
          str[i]=toupper(str[i]);
      }
  }
  cout<<str;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}