/*You are given an array ‘Arr’ consisting of ‘N’ distinct integers and a positive integer ‘K’. Find out Kth smallest and Kth largest element of the array. It is guaranteed that K is not greater than the size of the array.

Example:

Let ‘N’ = 4,  ‘Arr’ be [1, 2, 5, 4] and ‘K’ = 3.  
then elements of this array in ascending order is [1, 2, 4, 5].  Clearly, the 3rd smallest and largest element of this array is 4 and 2 respectively.*/


#include <bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
 sort(arr.begin(),arr.end());

    int a=-1,b=-1;

    for(int i=0;i<n;i++){

        if(i==k-1){

            a = arr[i];

        }

        if(i==n-k){

            b=arr[i];

        }

    }

    return {a,b};
}