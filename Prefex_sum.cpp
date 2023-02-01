
#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+23;
int pf[N];

int main()
{
    int n;
    cin>>n;
    int a[n+2];
    for (int i = 1;i<= n;i++)
    {

        cin>>a[i];
        pf[i]=pf[i-1]+a[i];  //Storing value in pf array
    }

    int q;
    cin>>q;
    while (q--)
    {

        int l,r;
        cin>>l>>r;

        cout<<pf[r]-pf[l-1];  // [r-(l-1)] == r to l get
    }

}
