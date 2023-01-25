
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector <int > odd,even;
        for (int i =1 ;i<= n;i++)
        {
            int x;
             cin>>x;
        if (x %2==0 )
        {
            even.push_back(i);
        }
        else odd.push_back(i);


        }


    if (odd.size()>=3)
    {

        cout<<"YES"<<endl;
        cout<<odd[0]<<" "<<odd[1]<<" " <<odd[2]<<endl;
    }
    else if ( even.size()>=2 && odd.size()>=1)
    {

        cout<<"YES"<<endl;
        cout<<odd[0]<<" " <<even[0]<<" "<<even[1]<<endl;
    }
    else cout<<"NO"<<endl;

    }
    }






