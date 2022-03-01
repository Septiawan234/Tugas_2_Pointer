#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	a = 10;
	b = 15;
	
	cout<<"a = "<<a<<endl;
	cout<<"&a = "<<&a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"&b = "<<&b<<endl;
	cout<<endl;
	
	int *p1, *p2, *p3;
	p1 = &b;
	p2 = p1;
	cout<<"*p1 = "<<*p1<<endl;
	cout<<"p1 = "<<&p1<<endl;
	cout<<"*p2 = "<<*p2<<endl;
	cout<<"p2 = "<<&p2<<endl;
	cout<<endl;
	
	c = 27;
	p1 = &c;
	cout<<"c = "<<c<<endl;
	cout<<"&c = "<<&c<<endl;
	cout<<"*p1 = "<<*p1<<endl;
	cout<<"p1 = "<<&p1<<endl;
	cout<<endl;
	
	a = *p1;
	p3 = &b;
	*p2 = 8;
	cout<<"a = "<<a<<endl;
	cout<<"&a = "<<&a<<endl;
	cout<<"*p3 = "<<*p3<<endl;
	cout<<"p3 = "<<&p3<<endl;
	cout<<"*p2 = "<<*p2<<endl;
	cout<<"p2 = "<<&p2<<endl;
	cout<<endl;
	
	cout<<"---Hasil Akhir---"<<endl;
	cout<<"*p1 = "<<*p1<<endl;
	cout<<"p1 = "<<&p1<<endl;
	cout<<"*p2 = "<<*p2<<endl;
	cout<<"p2 = "<<&p2<<endl;
	cout<<"*p3 = "<<*p3<<endl;
	cout<<"p3 = "<<&p3<<endl;
	cout<<endl;
	
	return 0;
}
