#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;  // define int max 10^7
int hsh[N];           // define array max

int main()
{
    int n;
    cin>>n;             // take how many element
    int a[n];
    for (int i =0 ;i<n;i++)
    {

        cin>>a[i];    // input array
        hsh[a[i]]++; // inside hash array count how many element have : like 2,2,3,4,4,4,5 --->> Index 2=2, index 3=1, index 4=3,5=1;

    }
    int q;
    cin>>q;  // take input query
    while (q--)
    {

        int x;  // take which vale count how many time have
        cin>>x;
        cout<<hsh[x]<<endl;
    }

}

// time complexity
//O(N)+O(Q)>>=O(N) > 2*10^5
