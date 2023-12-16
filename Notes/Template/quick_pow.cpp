#include <bits/stdc++.h>
using namespace std;
long long quick_pow(long long a, long long b) { 
	long long res = 1;
	while (b) {
		if (b & 1) res *= a;
		b >>= 1;
		a *= a;
	}
	return res; // res = a ^ b
}
int main() {
	long long a, p;
	cin >> a >> p;
	cout << quick_pow(a, p);
	return 0;
}
