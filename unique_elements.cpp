#include<bits/stdc++.h>

using namespace std;
const int N=1e7+10;
int arr[N];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(arr[a]!=1){
            arr[a]=1;
            cout<<a<<" ";
        }
    }
    
}