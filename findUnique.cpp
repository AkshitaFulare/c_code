#include<iostream>
#include<conio.h>
#include<iterator>
#include<map>
using namespace std;
//find unique in array using map
int findUnique(int arr[] , int size)
{
    int arr1[size];
    //Write your code here
    for(int i=0;i<size;i++)
    {
        arr1[i] = arr[i];
    }
    map<int , int> freq;
        for(auto x : arr1)
        {
            freq[x]++;
            
        }
    map<int ,int> :: iterator itr;
    for(itr = freq.begin();itr!=freq.end();itr++)
    {
        if((itr->second) == 1)
        {
            return itr->first;
        }  
    }
    return 0;
}
int main()
{
    int size =5;
    int arr[] = {1,2,3,3,1};
    int result  = findUnique(arr , size);
    cout<<result;
    return 0;
}    