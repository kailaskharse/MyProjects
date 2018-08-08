//testing of reference binding

#include<iostream>

int main(){
using namespace std;
	int n=100;
	int *p=&n;
	int &m=*p;
	cout<<"n="<<n<<" m="<<m<<" *p"<<*p<<" p="<<p<<endl;
	int k=5;
	p=&k;		//pointer value is changed
	k=20;		// is there change in m value?
	cout<<"n="<<n<<" m="<<m<<" *p"<<*p<<" p="<<p<<endl;
}
