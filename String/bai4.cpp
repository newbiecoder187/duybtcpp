#include <iostream>
#include <string>
using namespace std;

int main(){
	string a; getline(cin,a);
	string name;
	int x = a.length();
	for (int i = x - 1; i > -1; i--){
		if (a[i] == ' '){
			break;
		}
		int j = 0;
		name = name + a[i];
		j++;
	}
	int y = name.length();
	for (int i = 0; i < x - y ; i++){
		cout << a[i];
	}
	cout << endl;
	for (int i = name.length() - 1; i > -1; i--){
		cout << name[i];
	}
	return 0;	
}
