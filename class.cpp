#include<iostream>
using namespace st;

class Employee{
private:
	int a, b, c;
public:
	int d, e;
	void setdata(int a1, int b1, int c1);
	void getdata(){
		cout<<"value of a is:"<<a<<endl;
		cout<<"value of b is:"<<b<<endl;
		cout<<"value of c is:"<<c<<endl;
		cout<<"value of d is:"<<d<<endl;
		cout<<"value of e is:"<<e<<endl;
}
};

void Employee :: setdata(int a1, int b1, int c1){
a = a1;
b = b1;
c = c1;
}

int main(){
Employee pop
pop.d = 34;
pop.e = 24;
pop.setdata(1,3 ,3);
pop.getdata;

return 0;
}
