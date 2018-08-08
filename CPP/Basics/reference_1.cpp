#include<iostream>
//using namespace std;

int main(){
using namespace std;
	int a=1, b=2, c=3;
	int &z=a;		//variable z becomes alias of a
	cout<<"a="<<a<<" b="<<b<<" c="<<c<<" z="<<z<<endl;
	z=b;			//change value of a to value of b
	cout<<"a="<<a<<" b="<<b<<" c="<<c<<" z="<<z<<endl;
	z=c;	
	cout<<"a="<<a<<" b="<<b<<" c="<<c<<" z="<<z<<endl;
	cout<<"&a="<<&a<<" &b="<<&b<<" &c="<<&c<<" &z="<<&z<<endl;
}
