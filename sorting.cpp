#include<iostream>
#include<conio.h>
#include <bits/stdc++.h>
using namespace std;
int kthsmallest(int arr[] ,int l, int r,int k)
{
    
    std::sort(arr,arr+r+1);
    for(int i=0;i<=r;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<=r;i++)
     {
        if(i == k-1);
        return arr[k-1];
     }
}
int main()
{
    int l=0;
    int noOfElements=6;
    int k = 3;
    int arr[]={7, 10, 4, 3, 20, 15};
    int ans;
    ans = kthsmallest(arr , l ,noOfElements-1,k);
    cout<<ans;
    return 0;
}