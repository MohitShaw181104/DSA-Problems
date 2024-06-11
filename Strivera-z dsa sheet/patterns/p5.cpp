#include <bits/stdc++.h>
using namespace std;

void p5(int n){
    for (int i = 0; i <n; i++)
    {
        /* code */for (int j = n; j > i; j--)
        {
            /* code */cout << "* ";
        }
        cout<< endl;
        
    }
    
}

int main(){
    int n=5;

    p5(n);
    return 0;
}