#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0;i<n;i++)
        cin >> a[i];
        
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
	min_idx = i;
	for (j = i+1; j < n; j++)
	    if (a[j] < a[min_idx])
		min_idx = j;
        swap(a[min_idx], a[i]);
    }
    
    for (int i = 0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}
