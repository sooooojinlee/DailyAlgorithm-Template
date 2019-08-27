#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> a;

bool cmp(string s1, string s2) {
	string y1, y2, m1, m2, d1, d2;
	string temp;
	for (int i = 0; i < s1.length(); i++) {
		if ((s1[i] - '0') >= 0 && (s1[i] - '0') <= 9) {
			temp += s1[i];
		}
		else {
			if (y1 == "") {
				y1 = temp;
				if (y1.length() < 2) y1 = "";
			}
			else if (m1 == "") m1 = temp;
			else if (d1 == "") d1 = temp;
			temp = "";
		}
	}
	for (int i = 0; i < s2.length(); i++) {
		if ((s2[i] - '0') >= 0 && (s2[i] - '0') <= 9) {
			temp += s2[i];
		}
		else {
			if (y2 == "") {
				y2 = temp;
				if (y2.length() < 2) y2 = "";
			}
			else if (m2 == "") m2 = temp;
			else if (d2 == "") d2 = temp;
			temp = "";
		}
	}
	if (y1.length() == 4) {
		y1.erase(0, 2);
	}
	if (y2.length() == 4) {
		y2.erase(0, 2);
	}
	if (m1.length() == 1) {
		m1.insert(0, "0");
	}
	if (m2.length() == 1) {
		m2.insert(0, "0");
	}
	if (d1.length() == 1) {
		d1.insert(0, "0");
	}
	if (d2.length() == 1) {
		d2.insert(0, "0");
	}
	string date1 = y1 + m1 + d1;
	string date2 = y2 + m2 + d2;
	int num_date1 = stoi(date1);
	int num_date2 = stoi(date2);

	return num_date1 < num_date2;
}

int main() {
	while (true) {
		string s;
		getline(cin, s);
		a.push_back(s);
		if (s == "END") break;
	}
	a.pop_back();
	sort(a.begin(), a.end(), cmp);

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << '\n';
	}
	return 0;
}