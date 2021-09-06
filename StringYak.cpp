#include<bits/stdc++.h>
using namespace std;

int main()
{
    char word[20];

    cin>>word;

    for(int i=0;word[i]!='\0';i++)
    {
        if( word[i]=='y'&&word[i+1]=='a'&&word[i+2]=='k' )
        {
            i+=2;
        }
        else
        {
            cout<<word[i];
        }
    }
    return 0;
}
