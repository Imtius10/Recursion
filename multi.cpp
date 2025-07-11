#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int mul(int m,int n){
	if (n==0)
	{
		return 0;
	}
	int smallAns=mul(m,n-1);
	return smallAns+m;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
 int a,b; cin>>a>>b;
 int ans=mul(a,b);
 cout<<ans<<nl;

  return 0;
}