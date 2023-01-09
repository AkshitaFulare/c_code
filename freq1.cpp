#include <iostream>
#include <conio.h>
#include <map>
#include <iterator>
using namespace std;
//program to find the frequency of elements in array 
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> freq;
    for (auto x : a)
    {
        freq[x]++;
    }

    map<int, int>::iterator itr;
    for (itr = freq.begin(); itr != freq.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}