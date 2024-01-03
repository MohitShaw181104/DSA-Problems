/*You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
      int freq[3]= {0};

   for(int i = 0; i<n;i++)

   {

      if(arr[i]==0)freq[0]++;

      if(arr[i]==1)freq[1]++;

      if(arr[i]==2)freq[2]++;

   }

 

   int j = 0;

   for(int i = 0; i<3;i++)

      while(freq[i]-- != 0 )

         arr[j++] = i;
}