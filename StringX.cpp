#include<bits/stdc++.h>
using namespace std;

int main()
{
    char word[25];
    int i,length;
    cin>>word;

    for(i=0;word[i]!='\0';i++);
    length=i;

    for(i=0;word[i]!='\0';i++)
    {
        if( word[i]=='x' )
        {
            if( i==0 || i==(length-1) )
            {
                cout<<word[i];
            }
        }
        else
        {
            cout<<word[i];
        }
    }
    return 0;
}
