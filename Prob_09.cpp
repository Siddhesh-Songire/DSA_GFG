//*Santa in the Knapsack Colony!!!
/*Problem
On the eve of Christmas, Santa wants to distribute N gifts in Knapsack Colony. But in the Knapsack Colony, houses are not numbered sequentially. As Santa is old, he could not remember whether he has already delivered the gift to a particular House Number, Hi (1<= i <=N) or not. Thus, He may deliver one or more than one gifts in some houses and unfortunately none in some :(   

After completing the delivery of all gifts, Santa is wondering who may receive more than K gifts. As Santa is very tired now, Help him find the number of houses which has received more than K gifts.

INPUT
First-line contains two integers N(representing the number of gifts) and K.

The second line contains N-separated integers, H1, H2,........., HN, representing the house-number where Santa is distributing gifts.

OUTPUT
Output the number of houses which has received more than K gifts.

CONSTRAINTS
1 <= N <= 105

1 <= K <= 105

1<= Hi <= 107
*/

#include<bits/stdc++.h>
using namespace std;
const int n = 1e7 + 10;
int hsh[n];


int main(){
	int N ,K;
    cin>> N >> K;
	int arr[N];

    while (N--)
    {
        int x;
        cin >> x;
        hsh[x]++;
    }
    

	int ct = 0;
	for(int i = 1 ; i<=n; i++){
		if(hsh[i] > K){
            ct++;}
	}
	cout<<ct;
}