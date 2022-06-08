#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0;
    int arr[100],j=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'B')
        {
            c1++;
            if(i == (n-1))
            {
                j++;
                arr[j] = c1;
            }
        }
        else if(c1 != 0)
        {
            j++;
            arr[j] = c1;
            c1 = 0;
        }
    }
    cout<<j<<endl;
    for(int i=1; i<=j; i++)
    {
        cout<<arr[i]<<" ";
    }
}

