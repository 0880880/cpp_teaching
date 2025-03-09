#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

int main() {
	
	string in;
	getline(cin, in);

	string nb = "";
	int ectr = 0;
	
	for (int i = 0; i < in.length(); i++) {
		char c = in[i];
		if (isdigit(c)) {
			nb += c;
		} else {
			if (nb.length() == 0) {
				continue;
			}
			if (atoi(nb.c_str()) % 2 == 0) {
				ectr++;
			} else {
				cout << ectr << endl;
				return 0;
			}
			nb = "";
		}
	}

	if (atoi(nb.c_str()) % 2 == 1) {
		cout << ectr << endl;
	}

	return 0;
}
