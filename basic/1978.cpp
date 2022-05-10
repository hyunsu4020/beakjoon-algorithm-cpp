#include <iostream>
using namespace std;

int dp[1000001];
int n;

int main() {
	int n, result = 0;
	int temp, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		for (int div = 1; div <= temp; div++) {
			if (temp%div == 0)
				cnt++;
		}
		if (cnt == 2)
			result++;
		cnt = 0;
	}
	cout << result << '\n';
}
