#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of words : ";
    cin>>n;

    int index_array[n],i,count=0;
    char word[25];
    cin>>word;

    for(i=0;i<n;i++)
    {
        if(i<2)
        {
            index_array[i]=i;
            count++;
        }
        else if(i%2==0)
        {
            index_array[i]=index_array[i-1]+3;
            count++;
        }
        else
        {
            index_array[i]=index_array[i-1]+1;
            count++;
        }
    }

    for(i=0;i<count;i++)
    {
        cout<<word[index_array[i]];
    }

    return 0;
}
