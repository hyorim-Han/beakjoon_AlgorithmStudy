/*
10039_Æò±ÕÁ¡¼ö
#include <iostream>
using namespace std;
int main(void) {
	int sum = 0, score;
	for (int i = 0; i < 5; i++) {
		cin >> score;
		if (score < 40) { score = 40; }
		sum += score;
	}
	cout << sum / 5;
}

5543_»ó±Ù³¯µå
#include <iostream>
using namespace std;
int main(void) {
	int b[3], co, ci;
	for (int i = 0; i < 3; i++) {cin >> b[i];}
	int min = b[0];
	for (int i = 1; i < 3; i++){if (min > b[i]) { min = b[i]; }}
	cin >> co;
	cin >> ci;
	if (co > ci) { cout << min + ci - 50; }
	else { cout << min + co - 50; }
}

10817_¼¼¼ö
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a,a+3);
	cout << a[1];
}

2523_º°Âï±â-13
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

2446_º°Âï±â-9
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < i; j++) { cout << " "; }
		for (int j = 0; j < 2 * (n - i) - 1; j++) {	cout << "*";}
		cout << endl;
	}

	for (int i = 0; i < n - 1; i++)	{
		for (int j = 0; j < n - i - 2; j++) { cout << " "; }
		for (int j = 0; j < 2 * (i + 2) - 1; j++) { cout << "*"; }
		cout << endl;
	}
}

10996_º°Âï±â-21
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n * 2; i++){
		for (int j = 1; j <= n; j++){
			if (i % 2 == 0)	{
				if (j % 2 == 0) { cout << "*"; }
				else { cout << " "; }
			}
			else{
				if (j % 2 == 0) { cout << " "; }
				else { cout << "*"; }
			}
		}
		cout << endl;
	}
	return 0;
}
*/

#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n * 2; i++){
		for (int j = 1; j <= n; j++){
			if (i % 2 == 0)	{
				if (j % 2 == 0) { cout << "*"; }
				else { cout << " "; }
			}
			else{
				if (j % 2 == 0) { cout << " "; }
				else { cout << "*"; }
			}
		}
		cout << endl;
	}
	return 0;
}