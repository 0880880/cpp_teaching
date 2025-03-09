#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

int main() {

	string in;
	getline(cin, in);

	string nb = "";

	int zesht = 0;

	for (int i = 0; i < in.length(); i++) {
		char c = in[i];
		if (isdigit(c)) {
			nb += c;
		} else {
			if (nb.length() == 0) {
				continue;
			}
			int n = atoi(nb.c_str()) % 10;
			if (n == 5 || n == 7)  {
				zesht++;
			}
			nb = "";
		}
	}

	if (zesht >= 8) {
		cout << "bad" << endl;
	} else {
		cout << "good" << endl;
	}

	return 0;

}
