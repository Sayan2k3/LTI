//maxsubarray
#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int> arr, int n)
{
    long long maxi=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<=0){
            sum=0;
        }
        
        maxi=max(maxi,sum);
        
    }
    return maxi;

    
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubarraySum(arr,n);
    return 0;
}