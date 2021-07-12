#include <bits/stdc++.h>
using namespace std;

void primeFact(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			int ct=0;
			while(n%i==0)
			{
				n/=i;
				ct++;
			}
			cout<<"("<<i<<"^"<<ct<<")"<<endl;
		}
	}
}

int main()
{
	primeFact(625*343);
}