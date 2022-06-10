#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <math.h>


int main() {
	
	int t;
	cin>>t;
	while(t-->0){
        
        long long n;
        cin>>n;
        for (long i=1; i<=sqrt(n); i++)
        {
            if (n%i == 0)
            {
                // If divisors are equal, print only one
                if (n/i == i)
                    cout <<" "<< i;
     
                else // Otherwise print both
                    cout << " "<< i << " " << n/i;
            }
        }
        cout<<"\n";

	}
	
	
	return 0;
}
