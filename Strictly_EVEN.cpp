#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=1;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if((i%2==1 and a%2==0))
        {
            flag=0;
            break;
        }
    }
    if(flag)cout<<"True";
    else cout<<"False";
}