// url = https://atcoder.jp/contests/abc231/tasks/abc231_b

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  map<string,int>mp;
  while(t--){
      string s;
      cin>>s;
      mp[s]++;
  }
  int x = INT_MIN;
  string res;
  for(auto i: mp){
      if(x<i.second){
          x = i.second;
          res = i.first;
      }
  }
  cout<<res<<endl;
  return 0;
}
