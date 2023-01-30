#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long n;

    cin>>n;
    if (n%2!=0 )
    {

        cout<<-1<<endl;
    }
    else
    {

        cout<<"1"<<" "<<n/2<<endl;
    }
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
