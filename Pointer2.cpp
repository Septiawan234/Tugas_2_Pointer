#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	a = 10;
	b = 15;
	c = 27;
	cout<<"a = "<<a<<endl;
	cout<<"&a = "<<&a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"&b = "<<&b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"&c = "<<&c<<endl;
	cout<<endl;
	
	int *p1, *p2, *p3;
	p1 = &a;
	p2 = &b;
	cout<<"*p1 = "<<*p1<<endl;
	cout<<"p1 = "<<&p1<<endl;
	cout<<"*p2 = "<<*p2<<endl;
	cout<<"p2 = "<<&p2<<endl;
	cout<<endl;
	
	*p1 = c;
	a = *p2;
	b = 6;
	cout<<"*p1 = "<<*p1<<endl;
	cout<<"p1 = "<<&p1<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"&a = "<<&a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"&b = "<<&b<<endl;
	cout<<endl;
	
	p3 = &b;
	cout<<"*p3 = "<<*p3<<endl;
	cout<<"p3 = "<<&p3<<endl;
	cout<<endl;
	
	p3 = &c;
	*p1 = *p3;
	cout<<"*p3 = "<<*p3<<endl;
	cout<<"p3 = "<<&p3<<endl;
	cout<<"*p1 = "<<*p1<<endl;
	cout<<"p1 = "<<&p1<<endl;
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
