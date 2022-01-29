//* Max Sum Subarray of size K 
/*Given an array of integers Arr of size N and a number K.
Return the maximum sum of a subarray of size K.

 

Example 1:

Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.
*/



// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
    int sum = 0;
    int ans = INT_MIN;
    for(int i=0 ; i<K ; i++){
        sum += Arr[i];
    }
    ans = max(ans,sum);
    
    // sliding window algo
    for(int i=0 ; i<N-K ; i++){
        sum -= Arr[i];
        sum += Arr[i+K];
        ans = max(ans,sum);
    }
    return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends