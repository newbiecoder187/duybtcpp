#include <iostream>

using namespace std;

int main(){
	int n,m; cin >> n >> m;
	int a[n][m];
	// Nhap mang
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	// tao gia tri ban dau cho bien max
	int max = a[0][0];
	// so sanh gia tri trong mang
	for (int j = 1; j < m; j++){
		if (max < a[0][j]) max = a[0][j];
	}
	// in max
	cout << max;
	return 0;	
}
