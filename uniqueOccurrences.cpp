#include<vector>
#include<iostream>
#include<map>
#include<iterator>
#include<iostream>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
  map<int , int > freq;
  for(auto x: arr)
  {
    freq[x]++;
  } 
  unordered_set<int  > uniqueFreq;
  for (auto& i : freq) {
        if (uniqueFreq.count(i.second))
            return false;
        else
            uniqueFreq.insert(i.second);
    }
 

    return true;
  
}
int main()
{
    
    int arr[]={1,2,2,1,1,3};
    bool result = uniqueOccurrences(arr); 
    if (result)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
