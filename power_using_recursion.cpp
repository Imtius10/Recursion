#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int p(int a, int b){
	if (b==0)
	{
		return 1;
	}
	int smallAns=p(a,b-1);
	return a*smallAns;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  int a,b;
  cin>>a>>b;
  int ans=p(a,b);
  cout<<ans<<nl;
  
  return 0;
}