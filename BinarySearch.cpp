#include<bits/stdc++.h>
using namespace std;
	// Monotionik function 1,3,5,6,7/ 7,5,4,3,1
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
#endif

     // Write Code here 

	int n;
	cin>>n;

	vector <int > v(n);
	for (int i=0 ;i<n;i++)cin>>v[i];

	int to_find;
	cin>>to_find;

	int low=0,hi=n-1;

	while (hi-low>1){
		int mid =(hi+low)/2;

		if (v[mid] < to_find){
			low =mid+1;
		}else {
			hi=mid;
		}
	}
	if (v[low]==to_find){
		cout<< "index number is : "<<low;
	}
	else if (v[hi]==to_find){
		cout<<"Index number is : " << hi;
	}
	else {
		cout<<"NOt found ";
	}


}