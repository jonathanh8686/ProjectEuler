// Euler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bits/stdc++.h"

using namespace std;

vector<int> primes;
unsigned long long ans;
int isPrime[2000005];

void sieve(int lim)
{
	for (int i = 0; i < 2000005; i++) isPrime[i] = 1;
	isPrime[0] = isPrime[1] = 0;

	for (int i = 0; i < lim; i++)
	{
		if (isPrime[i])
		{
			primes.push_back(i);
			for (int j = i * 2; j <= lim; j += i)
				isPrime[j] = 0;
		}
	}
}

int main()
{
	sieve(2000005);
	for (int i = 0; i < primes.size(); i++)
	{
		if (primes[i] > 2000000)
			break;
		ans += primes[i];
	}

	cout << ans << endl;
    return 0;
}

