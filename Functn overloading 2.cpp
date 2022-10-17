#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"sum="<<(a+b);
}
void add(double a,double b)
{
	cout<<endl;
	cout<<"sum="<<(a+b);
}
int main()
{
	add(10,2);
	add(5.3,3.4);
	return 0;
}
