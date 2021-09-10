#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==6 || b==6 || (a+b)==6 ||(a-b)==6||(b-a)==6)
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }

    return 0;
}
