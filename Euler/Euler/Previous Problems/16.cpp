// Euler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bits/stdc++.h"
#include "InfInt.h"

using namespace std;

typedef long long ll;

int main()
{
	InfInt a = 1, b = 0;
	for (int i = 0; i < 1000; i++)
		a *= 2;

	string s = a.toString();
	for (int i = 0; i < s.size(); i++)
		b += s[i] - '0';

	cout << b << endl;
	return 0;
}

