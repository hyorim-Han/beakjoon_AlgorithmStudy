/*
#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
	char arr[100] = {0, };
	int sum = 0, cnt = 0, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr;//OOXXOXXOOO
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				cnt++;
				sum += cnt;
			}
			else { cnt = 0; }
		}
		cout << sum << endl;
		sum = 0;
		cnt = 0;
	}
	return 0;
}
*/

#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(void) {
	string n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n.size(); i++) {
		if ((n[i] == 'c') && (n[i + 1] == '=' || n[i + 1] == '-')) { i += 1; }
		else if ((n[i] == 'd') && (n[i + 1] == 'z' && n[i + 2] == '=')) { i += 2; }
		else if ((n[i] == 'd') && (n[i + 1] == '-')) { i += 1; }
		else if (((n[i] == 'l') || (n[i] == 'n')) && (n[i + 1] == 'j')) { i += 1; }
		else if (((n[i] == 's') || (n[i] == 'z')) && (n[i + 1] == '=')) { i += 1; }
		cnt += 1;
	}
	cout << cnt;
	return 0;
}
