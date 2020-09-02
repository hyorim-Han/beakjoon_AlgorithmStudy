#include <iostream>
#include <cmath>
using namespace std;
/*
1011_Fly me to the Alpha Centauri
int main() {
	int t, x, y;
	int n = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin>>x>>y;
		int k = y - x;
		if (k == 2) { cout << '2' << endl; break;}
		if (k == 3) { cout << '3' << endl; break;}
		while (pow(n + 1, 2) < k) { n++;}
		if ((k - pow(n,2)) > n) { cout << 2 * n + 1 << endl; }
		else { cout << 2 * n << endl; }
	}
}

1193_분수찾기 
int main() {
	int n;
	cin >> n;
	if (n == 1) { cout << "1 / 1" << endl; }
	else {
		int num = 2;
		int a = (num * num + num) / 2;
		while (a < n) { num++; a = (num * num + num) / 2; }
		int num2 = num - 1;
		a = (num2 * num2 + num2) / 2;

		int k = n - a;
		if (n % 2 != 0) { cout << k << "/" << num + 1 - k << endl; }
		else { cout << num + 1 - k << "/" << k << endl; }
	}
}

2292_벌집
int main() {
	int n;
	cin >> n;
	if (n == 1) { cout << '1' << endl; }
	else {
		int k = 2;
		while (3 * pow(k, 2) - (3 * k) + 1 < n) { k++; }
		cout << k << endl;
	}
}

2775_부녀회장이 될테야
int main() {
	int t, k, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k;
		cin >> n;
		if (n == 1) { cout << '1' << endl; }
		else {
			int** apt = (int**)new int[sizeof(int*) * (k + 1)];
			for (int j = 0; j < k + 1; j++) {
				apt[j] = (int*)new int[sizeof(int) * n];
			}
			for (int j = 0; j < n; j++) { apt[0][j] = j + 1;}
			for (int j = 1; j < k + 1; j++) { apt[j][0] = 1;}
			for (int q = 1; q < k + 1; q++) {
				for (int p = 0; p < n; p++) {
					apt[q][p + 1] = apt[q][p] + apt[q - 1][p + 1];
				}
			}
			cout << apt[k][n-1] << endl;

		}
	}
}

2839_설탕 배달
int main() {
	int n, a = 0, b = 0, point = 0;
	int value[5000];
	cin >> n;
	while (5 * b < n) {
		int gap = n - 5 * b;
		if (gap % 3 == 0) { value[point] = gap / 3 + b; point++; }
		b++;
	}
	if (value[0] == 0) { cout << '-1' << endl; }
	else {
		int min = value[0];
		for (int j = 0; j < point; j++) {
			if (min > value[j]) { min = value[j]; }
		}
		cout << min << endl;
	}
}

2869_달팽이는 올라가고 싶다
int main() {
	int a, b, v;
	int n = 1;
	scanf_s("%d %d %d", &a, &b, &v);
	int h = (a - b) * n, k = v - a;
	while (k > h) { n++; h = (a - b) * n; }
	cout << n + 1 << endl;
}

10250_ACM 호텔
int main() {
	int t, h, w, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		scanf_s("%d %d %d", &h, &w, &n);
		int floor = n % h;
		int unit = (n / h) + 1;
		if (unit < 10) {cout << floor << '0' << unit << endl;}
		else{ cout << floor << unit << endl; }
	}
}

1712_손익분기점
int main() {
	int a, b, c;
	int n = 1;
	scanf_s("%d %d %d", &a, &b, &c);
	if (b > c) { cout << "-1" << endl; }
	else { while (a + n * b > n * c) { n++; } cout << n + 1 << endl;}
}
*/

int main() {
	int t, k, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k;
		cin >> n;
		if (n == 1) { cout << '1' << endl; }
		else {
			int** apt = (int**)new int[sizeof(int*) * (k + 1)];
			for (int j = 0; j < k + 1; j++) {
				apt[j] = (int*)new int[sizeof(int) * n];
			}
			for (int j = 0; j < n; j++) { apt[0][j] = j + 1;}
			for (int j = 1; j < k + 1; j++) { apt[j][0] = 1;}
			for (int q = 1; q < k + 1; q++) {
				for (int p = 0; p < n; p++) {
					apt[q][p + 1] = apt[q][p] + apt[q - 1][p + 1];
				}
			}
			cout << apt[k][n-1] << endl;
			
		}
	}
}