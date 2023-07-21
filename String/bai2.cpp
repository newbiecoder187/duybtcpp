#include <iostream>
#include <string>
using namespace std;

int main(){
	string a; 
	getline(cin,a);
	char x; cin >> x;
	int dem = 1;
	for (int i = 0; i < a.length(); i++){		
		if (a[i]  == x){
			cout << dem << " ";
		}
		if (a[i]  == ' '){
			dem = dem + 1;
		}
	}
	return 0;
}
