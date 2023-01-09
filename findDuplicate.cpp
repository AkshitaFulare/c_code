#include<stdio.h>
#include<vector>
using namespace std;
 int findDuplicate(vector<int> &arr) 
{
    int ans =0;
    for(int i = 0;i<arr.size();i++)
    { 
        ans = ans^arr[i];
     }
	for(int i = 0;i<arr.size();i++)
    {
        ans = ans^i;
    }
    return ans;
}
int main()
{
    
    int arr[]={1,2,2,1,1,3};
    int result = findDuplicate(arr); 
    printf("%d",result);
    
}
