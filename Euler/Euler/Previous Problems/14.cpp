// Euler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bits/stdc++.h"
#include "InfInt.h"

using namespace std;

typedef long long ll;

//map<ll, ll> m;
ll ans, cans;

ll l(ll n)
{
	ll on = n;
	//if (m[n] != 0)
	//	return m[n];
	ll c = 0;
	while (n != 1)
	{
		if (n < 0)
			cout << "test" << endl;
		c++;
		if (n & 1)
			n = 3 * n + 1;
		else
			n /= 2;

	//	if (m[n] != 0)
	//		return m[on] = m[n] + c;
	}
	//m[on] = c;
	return c;
}

int main()
{
	for (int i = 1; i <= 1000000; i++)
	{
		ll tl = l(i);
		if (tl > cans)
		{
			ans = i;
			//cans = m[i];
			cans = tl;
		}
	}

	cout << ans << endl;
	return 0;
}

