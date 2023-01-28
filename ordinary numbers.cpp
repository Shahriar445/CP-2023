#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long i,j,n,count=0;
    cin>>n;

    for (i=1;i<=9;i++)
    {

        for (j=i;j<=n;j=(j*10)+1)
        {

            count++;
        }

    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {

        solve();
    }
}
