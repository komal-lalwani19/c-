#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		student(int rno,string n)
		{
			id=rno;
			name=n;
		}
		void display()
		{
			cout<<"id:"<<id<<endl;
			cout<<"name:"<<name<<endl;
		}
};
int main()
{
	student s1(101,"komal");
	s1.display();
	student s2=s1;
	s2.display();
}