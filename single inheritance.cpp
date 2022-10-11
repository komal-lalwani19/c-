#include<iostream>
using namespace std;
class person
{
	public:
		int id;
		int age;
		void getdata()
		{
			cout<<"enter id and age"<<endl;
			cin>>id>>age;
		}
};
class student:public person
{
	public:
		int sid;
		void studata()
		{
			cout<<"enter student id:"<<endl;
			cin>>sid;
		}
		void display()
		{
			cout<<"student id:"<<sid<<endl;
			cout<<"person id:"<<id<<endl;
			cout<<"age:"<<age<<endl;
		}
};
int main()
{
	student s1;
	s1.getdata();
	s1.studata();
	s1.display();
}