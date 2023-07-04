#include <iostream>

using namespace std;

int main(){
	int x,a,b; cin >> x >> a >> b;
	for (int i = 1; i<=x;i++){
		for (int j = 1; j<=x;j++){
			cout << "*" << " ";
			}
		cout << endl;
	}
	cout << endl;
	for (int k = 1; k<=a;k++){
		for (int h = 1; h<=b;h++){
			cout << "*" << " ";
			}
		cout << endl;
	}
	return 0;
}




