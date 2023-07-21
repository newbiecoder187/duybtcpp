#include <iostream>
#include <string>
using namespace std;

int main(){
	string a; getline(cin,a);
	char x; cin >> x;
	int dem = 0;
	for (int i = 0; i < a.length(); i++){
		if (a[i]  == x){
		dem = dem + 1;
		} else if (a[i] - 32 == x){
		dem = dem + 1;
		} else if (a[i] + 32 == x){
		dem = dem + 1;
		}
	}
	cout << dem;
	return 0;	
}
