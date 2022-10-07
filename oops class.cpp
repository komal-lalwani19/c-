#include<iostream>
using namespace std;
class student
{
	public://data
    int id=101;
    string name="komal"; //charname[20]="komal"
    //function
    void display()
    {
    	cout<<"id :"<<id<<endl;
    	cout<<"name:"<<name<<endl;
	}
};
int main()
{
	student s1;
	s1.display();
}