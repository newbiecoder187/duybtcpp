#include <iostream>
#include <string>
using namespace std;

int main(){
	string a; getline(cin,a);
	string name;
	// Nhập giá trị ngược cho xâu tên
	for (int i = a.length() - 1; i > -1; i--){
		if (a[i] == ' '){
			break;
		}
		int j = 0;
		name = name + a[i];
		j++;
	}
	// In phần họ và tên đệm
	for (int i = 0; i < a.length() - name.length() ; i++){
		cout << a[i];
	}
	cout << endl;
	// In phần tên
	for (int i = name.length() - 1; i > -1; i--){
		cout << name[i];
	}
	return 0;	
}
