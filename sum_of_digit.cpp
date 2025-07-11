#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int cnt_sum(int n){
	if (n==0)
	{
		return 0;
	}
	int smallAns=cnt_sum(n/10);
	int last_digit=n%10;
	return last_digit+smallAns;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  int ans=cnt_sum(t);
  cout<<ans<<nl;
  return 0;
}