#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int fact(int n){
	//cout<<n<<nl;
	if (n==0)
	{
		return 1;
	}
	int smallAns=fact(n-1);
	return n*smallAns;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  int ans=fact(t);
  cout<<ans<<nl;
  return 0;
}