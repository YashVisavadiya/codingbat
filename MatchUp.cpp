#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if( a[i]!=b[i] && ((a[i]-b[i]<=2)||(b[i]-a[i]<=2)))
        {
            count++;
        }
    }
        cout<<count;
    return 0;
}
