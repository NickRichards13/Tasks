#include <iostream>
using namespace std;

int main() {
	int n, m, p, q;
	cin >> n;
	cin >> m;
	int* arr = new int[n];
	for (int i=0; i<n; i++) {
		arr[i] = i+1;
	}
	cout << arr[0];
	p = m - 1;
	do {
		cout << arr[p];
		p = (p + m - 1) % n;
	} while (p != 0);
	return 0;
}