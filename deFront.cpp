#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[10];

    cin>>ch;

    for(int i=0;ch[i]!='\0';i++)
    {
        if(i<2)
        {
            if(ch[i]==97+i)
            {
                cout<<ch[i];
            }
        }
        else
        {
            cout<<ch[i];
        }
    }
    return 0;
}
