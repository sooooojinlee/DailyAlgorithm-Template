#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	for (int i = 2; i <= 16; i++) {
		int len = s.size();
		int sum = 0;
		int index = 0;
		for (int j = 0; j < len; j++) {
			++index;
			int temp = (s[j] - '0' < 10) ? s[j] - '0' : s[j] - 'A' + 10; //16진수 수와 구분
			if (temp >= i) break; //현재 i진법인데 i이상의 수가 있으면 x
			sum *= i;
			sum += temp; //len의 자리 수는 i의 len-1승
		}
		if (index == len && sum == n) { //s를 끝까지 탐색한 후 sum과 비교하는지
			cout << i << '\n';
			return 0;
		}
	}
	return 0;
}