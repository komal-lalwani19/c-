#include<iostream>
using namespace std;
int main()
{
	try
	{
		int age=15;
		if(age>=18)
		{
			cout<<"access granted- you are old enough";
		}else
		{
			throw(age);
		}
	}
	catch(int myNum)
	{
		cout<<"Access denied-you must be atleast 18 years old \n";
		cout<<"age is :"<<myNum;
	}
}