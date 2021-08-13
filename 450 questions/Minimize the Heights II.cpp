#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        int min=-1;
        int max=0;
        for(int i=0;i<n;i++){
            if((arr[i]-k)<=0){
                arr[i]=arr[i]+k;
            }
            else{
                arr[i]=arr[i]-k;
            }
            if(min>arr[i]|| min<0){
                min=arr[i];
            }
            if(max=arr[i]){
                max=arr[i];
            }
        }
        return (max-min);
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  