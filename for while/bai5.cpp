#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long goc;
	double lai;
	int nam;
	cin >> goc >> lai >> nam;
	long long tong = goc * pow(1+lai,nam);
	cout << tong;
	return 0;
}




