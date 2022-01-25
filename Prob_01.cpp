//!  Leaders in an array

/*Given an array A of positive integers. Your task is to find the leaders in the array.
 An element of array is leader if it is greater than or equal to all the elements to its right side. 
 The rightmost element is always a leader.
 Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
  */

//? This is not a optimised solution 

// #include <bits/stdc++.h>
// using namespace std;

//     vector<int> leaders(int a[], int n){
//         vector <int> v;
//         bool flag = true;
//         for(int i =0; i< n ;i++){
//             for(int j =i+1; j< n ;j++){
//                 if(a[i] < a[j]){
//                     flag = false;
//                 }
//             }
//             if(flag == true){
//                 v.push_back(a[i]);
//             }
//             flag = true;
//         }
//         return v;
        
//     }

// int main(){

// int n;
// cin>>n;

// int a[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>a[i];
// }

// vector<int> k = leaders(a, n);

// for(int i=0;i<k.size();i++) 
//     cout<<k[i]<<" "; 

// return 0; 
// }
//!-----------------------------------------------------------------------------------------------------------------------
//* Optimised solution of TC O(n) is

// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector <int> v;
        int curr_leader = a[n-1];
        v.push_back(curr_leader);
        
        for(int i = n-2; i>=0 ; i--){
            if(a[i] >= curr_leader){
                v.push_back(a[i]);
                curr_leader = a[i];
            }
        }
        
        reverse(v.begin(),v.end());
        return v;
        
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends