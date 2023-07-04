#include <iostream>

using namespace std;

int main(){
	int i,n,j; cin >> i >> n;
	j = i;
	for (i;i<=n;i++){
		cout << i*i << " ";
	}
	cout << endl;
	for (j;j<=n;j++){
		cout << j*j*j << " ";	
	}
	return 0;
}




