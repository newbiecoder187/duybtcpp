 #include <iostream>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[n][m];
    // Nhap mang
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int maxSum = 0;
    int cot = 0;
    for (int j = 0; j < m; j++){
        int sum = 0;
        for (int i = 0; i < n; i++){
        	// tinh tong cua cac cot
            sum += a[i][j];
        }
        // tim maxSum va tim cot
        if (sum > maxSum){
            maxSum = sum;
            cot = j + 1;
        }
    }
    cout << cot << endl;
    return 0;
}
