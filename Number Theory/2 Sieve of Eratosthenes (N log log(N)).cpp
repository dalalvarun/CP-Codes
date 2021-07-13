#include <iostream>
using namespace std;

int isPrime[1000001];

void sieve(int maxN)
{
	for(int i=1;i<maxN;i++) isPrime[i] = 1;
	isPrime[0] = isPrime[1] = 0;
	
	for(int i=2;i*i<=maxN;i++)
	{
		for(int j= i*i;j<=maxN;j+=i)
		isPrime[j] = 0;
	}
}

int main() {
	sieve(50);
	cout<<isPrime[27]<<endl;
	cout<<isPrime[47]<<endl;
	return 0;
}