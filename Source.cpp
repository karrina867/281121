//karina Baslyk 
 #include<iostream>
 #include<ctime>
 #include<iomanip>
using namespace std;
int main() {
	//#3
	const int n = 3;
	int s[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s[i][j] = rand() % 81 - 40;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << s[i][j] << ' ';
		}
		cout << endl;
	}
	int k=0;
	if (s[0][2] % 2 != 0) { k++;}
	if (s[1][1] % 2 != 0) { k++;}
	if (s[2][0] % 2 != 0) { k++;}
	cout << k << endl;
	return 0;
}