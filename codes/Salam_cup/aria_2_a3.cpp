#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n <= 999 || n >= 10000) {
		return -1;
	}

	int yekan = n % 10;
	int hezaregan = n / 1000;

	if (yekan == hezaregan) {
		cout << "winner" << endl;
	} else {
		cout << "loser" << endl;
	}

	return 0;
}
