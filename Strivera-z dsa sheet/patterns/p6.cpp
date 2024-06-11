#include <bits/stdc++.h>
using namespace std;

void p6(int n){
    for (int i = 0; i < n; i++)
    {
        /* code */for (int j = n; j > i; j--)
        {
            /* code */cout << n-j+1 << "";
        }
        cout<< endl;
        
    }
    
}

int main(){
    int n=5;
    p6(n);
    return 0;
}