#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];
    // Nhap mang
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int maxSum = 0;
    int hang = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
		for (int j = 0; j < m; j++) {
			// tinh tong cac hang
            sum = sum + a[i][j];
        }
        // tim maxSum va tim hang
        if (sum > maxSum) {
            maxSum = sum;
            hang = i + 1;
        }
    }
    cout << hang << endl;
    return 0;
}
