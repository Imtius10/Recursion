#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int fibo(int n){
	if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		return 1;
	}
	int call_1=fibo(n-1);
	int call_2=fibo(n-2);

	return call_1+call_2;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  int ans=0;
  for (int i = 0; i < t; ++i)
  {
  	ans=fibo(i);
  	cout<<ans<<" ";
  }
 
  return 0;
}