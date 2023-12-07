#include<bits/stdc++.h>
using namespace std;

int main() {
	int x = 9;
	int *a = &x;
	int **b = &a;

	cout << x << "\n";
	cout << &x << "\n";
	cout << a << "\n";
	cout << *a << "\n";
	cout << &a << "\n";
	cout << b << "\n";
	cout << *b << "\n";
	cout << **b << "\n";
	**b = 8;	
	cout << x << "\n";

	return 0;
}
