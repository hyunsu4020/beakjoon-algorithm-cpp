#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int result = 0, max = 0;
	if (a == b && b == c) {
		result = 10000 + a * 1000;
	}
	else if (a == b || a == c) {
		result = 1000 + a * 100;
	}
	else if (b == c) {
		result = 1000 + b * 100;
	}
	else {
		if (a > b && a > c)
			max = a;
		else if (b > a && b > c)
			max = b;
		else if (c > a && c > b)
			max = c;
		result = max * 100;
	}

	cout << result;

	return 0;
}
