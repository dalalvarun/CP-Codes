#include <bits/stdc++.h>
using namespace std;

//Euclid's Division Lemma : A = B*q + R
//Euclid's Algorithm:
//GCD(A,B) = A, if(B=0)
//			GCD(B,A%B), if(B!=0)

int gcd(int a,int b)
{
	if(b>a) swap(a,b);
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main()
{
	cout<<gcd(30,12);
}