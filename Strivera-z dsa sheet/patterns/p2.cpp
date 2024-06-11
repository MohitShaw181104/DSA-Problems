#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void p2(int n){
    for (int i = 0; i <n ; i++)
    {
        /* code */for (int j = 0; j <= i ; j++)
        {
            cout << "* ";
        }
        cout <<  endl;
        
    }
    
}
int main()
{
    int n=5;

    p2(n);

    return 0;
}