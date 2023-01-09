#include<iostream>

using namespace std;
int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i=0;i<size;i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int size =5;
    int arr[] = {1,2,3,3,1};
    int result  = findUnique(arr , size);
    cout<<result;
    return 0;
}