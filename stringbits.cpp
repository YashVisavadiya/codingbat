#include<bits/stdc++.h>
using namespace std;

int main()
{
    char word[20];

    cin>>word;

    for(int i=0;word[i]!='\0';i++)
    {
        if(i%2==0)
        {
            cout<<word[i];
        }
    }

    return 0;
}
