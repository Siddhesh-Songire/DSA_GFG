//* Recursion on subsequence (Printing subsequence)

#include<bits/stdc++.h>
using namespace std;

void print_sub(int i, vector<int> &ds, int arr[], int n){
    if(i == n){
        for(auto it: ds) cout << it <<" ";
        cout<< endl;
        return;
    }
    
// take 
    ds.push_back(arr[i]);
    print_sub(i+1,ds, arr,n);

    // not take
    ds.pop_back();
    print_sub(i+1,ds, arr,n);

}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector <int> ds;
    print_sub(0,ds,arr,n);
}