#include <iostream>

using namespace std;

int main(){
	int n,m; cin >> n >> m;
	int a[n][m];
	int sum = 0;
	// Nhap mang va tinh sum
	for (int i=0; i<n;i++){
		for (int j=0; j<m;j++){
		cin >> a[i][j];
		sum = sum + a[i][j];
		}
	}
	cout << sum;
	return 0;	
}
