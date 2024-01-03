/*You are given an array “ARR” of size N. Your task is to find out the sum of the maximum and minimum elements in the array.*/

#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int mini = arr[0];

    int maxi = arr[0];

    int i = 0;

    while (i < n){

        mini = min(mini, arr[i]);

        maxi = max(maxi, arr[i]);

        i++;

    }

    return mini + maxi;

}
