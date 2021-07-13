#include <bits/stdc++.h>
using namespace std;


int smallestFactor[1000001];
void specialSieve( int n )
{
	for(int i=1;i<=n;i++) smallestFactor[i] = i;
	for(int i=2;i*i<=n;i++)
	{
		if(smallestFactor[i]==i)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				if(smallestFactor[j]==j)smallestFactor[j] = i;
			}
		}
	}
}

vector<int> getFactorisation(int n)
{
	specialSieve(n);
	vector<int> factorisation;
	while(smallestFactor[n]!=1)
	{
		factorisation.push_back(smallestFactor[n]);
		n/=smallestFactor[n];
	}
	return factorisation;
}

int main()
{
	vector<int> ans = getFactorisation(12246);
	for(int x: ans) cout<<x<<" ";
}