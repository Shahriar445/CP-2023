#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,count=0;
    cin>>s>>n;

    pair <int,int > val[10000];

    for (int i =0;i<n;i++)

    {

        cin>>val[i].first>>val[i].second;

    }
    sort (val,val+n);
    for (int i =0 ;i< n;i++)
    {
        if (s<=val[i].first)
        {
            count++;

            break;
        }
        else
        {

            s=s+val[i].second;
        }
    }
    if (count > 0 )
    {

        cout<<"NO"<<endl;
    }
    else
    {

        cout<<"YES"<<endl;
    }

}
