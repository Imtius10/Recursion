#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
void p(int n){
	if (n==0)
	{
		return;
	}
	cout<<n<<nl;
	p(n-1);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  p(10);
  
  return 0;
}