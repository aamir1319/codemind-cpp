#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>a>>b;
    int m=-1;
    for(int i=0;i<n;i++)
    {
        if ((arr[i]<a or arr[i]>b) and m<arr[i])
        {
            m = arr[i];
        }
    }
    cout<<m;
}