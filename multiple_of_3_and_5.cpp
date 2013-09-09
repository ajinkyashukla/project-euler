/**
* Simple program that adds multiple of two numbers upto a certain number
* @version 1.0
* @author ajinkya shukla <ajinkyashukla02@gmail.com>
*/

#include<iostream>

using namespace std;

int main() {
	
	int x,y,n,a,b,sumx,sumy,greater,i=1,gcd,lcm,c,sumlcm;

	cin >> x >> y >> n;

	a=(n-1)/x;
	b=(n-1)/y;
	
	/*
	The program uses the formula for summation of AP series and then subtracts the summation of lcm of two numbers because it gets added twice.
	*/

	sumx=(2*x+(a-1)*x)*a/2;
	sumy=(2*y+(b-1)*y)*b/2;
	
	if(x>y)
		greater=x;
	else
		greater=y;

	while(i<=greater) {
		if(x%i==0 && y%i==0)
			gcd=i;
	i++;
	}
	
	lcm = x*y/gcd;
	c=(n-1)/lcm;

	sumlcm=(2*lcm+(c-1)*lcm)*c/2;

	cout << sumx+sumy-sumlcm;

	return 0;
}
