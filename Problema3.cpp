#include<iostream>
using namespace std;

int main(){
	int n, sumat, sum, perdido;
	cin >> n;
	sumat = n * (n + 1)/ 2;
	sum = 0;
	for(int i = 0; i < n - 1; i++){
		int a;
		cin >> a;
		sum = sum + a;
	}
	perdido = sumat - sum;
	cout << perdido;
	return 0;
}

