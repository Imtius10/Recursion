#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int cnt_zero(int n){
	if (n==0)
	{
		return 0;
	}
	int smallAns=cnt_zero(n/10);
	int last_digit=n%10;
	if (last_digit==0)
	{
		return 1+smallAns;
	}
	else return smallAns;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
   int ans=cnt_zero(t);
   cout<<ans<<nl;
  return 0;
}