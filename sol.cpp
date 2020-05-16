#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x[] = {1,2,3,4,5};
	int n = sizeof(x)/sizeof(x[0]);
	int num;
	cin >> num;
	int k = 0;
	for(int b = n/2; b >= 1; b /= 2){
		while(k+b < n && x[k+b] <= num) k += b;
	}
	if(x[k] == num){
		cout << "index: " << k;
	} 
	cout << "\n";
	return 0;
}
