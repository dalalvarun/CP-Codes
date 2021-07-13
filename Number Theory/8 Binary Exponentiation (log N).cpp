#include <bits/stdc++.h>
using namespace std;

//Binary Exponentiation
//At each step, if the power is odd, we reduce power by 1 and 
//multiply result by base.
//Else if power is even, then we try to reduce multiplications
//i.e. 4^6 becomes 16^3

int binPow(int a,int b)
{
	int res = 1;
	while(b)
	{
		if(b&1)
		{
			res*=a;
		}
		a*=a;
		b/=2;
	}
	return res;
}


int main()
{
	cout<<binPow(2,20);
}