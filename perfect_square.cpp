#include <bits/stdc++.h>
using namespace std;

void perfectSquares(float l, float r)
{

	for (int i = l; i <= r; i++) {

		if (sqrt(i) == (int)sqrt(i))
			cout << i << " ";
	}
}

int main()
{
	int l = 2, r = 24;

	perfectSquares(l, r);

	return 0;
}
