#include <bits/stdc++.h>
using namespace std;

//We use Segmented Sieve to find primes in range from L to R
//where they can be really large (like 10^12)

//But R-L+1 <= 10^6

int isPrime[1000001];

void segmentedSieve(int L, int R)
{
	for(int i=0;i<R-L+1;i++) isPrime[i] = 1;
	for(int i=2;i*i<=R;i++)
	{
		//Try this code without the following line 
		//I took 2 hours to decode whats wrong in my code
		int firstMult = max(i*i,L/i * i);
		for(int j=firstMult;j<=R;j+=i)
		{
			isPrime[j-L] = 0;
		}
	}
}

int main() {
	int L = 3, R= 180;
	segmentedSieve(L,R);
	for(int i=0;i<R-L+1;i++)
	{
		if(isPrime[i]==1) cout<<i+L<<endl;
	}
	return 0;
}
