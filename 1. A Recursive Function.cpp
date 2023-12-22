// url = https://vjudge.net/problem/AtCoder-abc273_a

#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n==0) return 1;
    else return n*solve(n-1);
}

int main()
{
    int n;
    cin>>n;
    int res = solve(n);
    cout<<res<<endl;
}
