#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int p=0;
        int ans=INT_MIN;
        int a=0;
        for(int i=0;i<n;i++){
            a+=arr[i];
            ans=max(ans,a);
            if(a<0){
                a=0;
            }
        }
        return ans;
        
    }
};

int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
 