// Euler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bits/stdc++.h"

using namespace std;


int main()
{
	for (double a = 1; a <= 1000; a++)
	{
		for (double b = 1; b <= 1000; b++)
		{
			double c = a * a + b * b;
			if (sqrt(c) == floor(sqrt(c)))
				if (a + b + sqrt(c) == 1000)
					cout << a << "\t" << b << "\t" << sqrt(c) << endl;
		
		}
	}
    return 0;
}

