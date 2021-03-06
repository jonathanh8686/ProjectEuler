// Euler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

ll factors(ll n)
{
	ll res = 0;
	for (ll i = 1; i <= ceil(sqrt(n)); i++)
		res += (n % i == 0);
	return 2 * (res + 1);
}

int main()
{
	ll c = 2;
	while (factors((c * (c + 1)) / 2) < 500)
		c++;
	cout << (c * (c + 1)) / 2 << endl;
	return 0;
}

