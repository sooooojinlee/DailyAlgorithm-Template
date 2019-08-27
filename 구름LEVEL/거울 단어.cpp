#include <iostream>
#include <string>
using namespace std;

string str1 = "bdilmnopqszuvwx", str2 = "dbilmnoqpzsuvwx";

int main() {
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		int len = s.length();
		bool ok = true;
		for (int i = 0; i <= len / 2; i++) {
			auto index = str1.find(s[i]);
			if (index == string::npos || s[len - 1 - i] != str2[index]) {
				ok = false;
			}
		}

		if (ok) {
			cout << "Mirror" << '\n';
		}
		else {
			cout << "Normal" << '\n';
		}
	}
	return 0;
}