#include<cstdlib>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string first, second;
	cout<<"enter two names:";
	cin>>first>>second;
	if(first<=second)
		cout<<"The order is correct\n";
	else
		cout<<"Wrong Order:'"<<second<<"' Should be before '"<<first<<"'\n";
}
