#include <iostream>
using namespace std;
// pre: a ^ b > 0 ^ a >= b
// post: mcd(a,b)= mcd(a,b) using Euclides algorithm
int mcd(int a, int b){
if (a%b==0){
	return b;
}	
else{
	
	return mcd(b,a%b);
}
}

int main (){
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << mcd (a,b) << endl;
	return 0;
	
}
