#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[10],word[10];

    cin>>name>>word;

    for(int i=0;word[i]!='\0';i++)
    {
        if( i>0 && name[i]==word[i] )
        {
            cout<<word[i];
        }
        else
            cout<<name[i];
    }
    return 0;
}
