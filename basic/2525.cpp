#include <iostream>
using namespace std;

int main() {
	int a, b, num;
	cin >> a >> b;
	cin >> num;

	b += num;
	if (b >= 60) {
		a += b / 60;
		b %= 60;
	}

	a %= 24;

	cout << a << " " << b;

	return 0;
}
