// Problem: Be Like Hasib
// Contest: Toph
// URL: https://toph.co/p/be-like-hasib
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long int n,x,count=0,hi,lo,mid;
	cin >> n >> x;
	
	 hi = n; lo= 1;
	
	while (hi>lo)
	{
		mid = (lo+ hi)/2;
		count++;
		
		if (x>mid )
		{
			lo = mid +1;
		}
		else 
		{
			hi= mid ;
		}
	}
	cout<<count<<endl;
	
			
}
