
#include <iostream>
#include <conio.h>
#include <map>
#include <iterator>
using namespace std;
int main()
{
   map<int, int> freq1;
    for (auto x : A)
    {
        freq1[x]++;
    } 
    map<int, int> freq2;
    for (auto x : B)
    {
        freq2[x]++;
    }
     for (auto i = freq1.begin(); i != freq1.end(); i++) {
 
        // If frequency not same return false
        if (freq2[i->first] != i->second) {
            return 0;
        }
    }
    return 1;
}
