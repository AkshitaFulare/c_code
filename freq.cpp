#include<iostream>
#include<conio.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int k = 2;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    map<int , int> freq;
     for(auto x: a)
    {
        freq[x]++;
        if(freq[a[x]] == k)
        {
            cout << a[x];
        }
    }
    // map<int , int >:: iterator itr;
    // for(itr = freq.begin();itr!=freq.end();itr++)
    // {
    //     //cout<<itr->first << " " <<itr->second <<endl;
    //     if((itr->second) == k)
    //     cout<< itr->first<<endl;
    // }
    // return 0;
}
