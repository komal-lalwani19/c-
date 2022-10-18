#include<iostream>
using namespace std;
class bird
{
	public:
		void intro()
		{
			cout<<"there are many types of bird"<<endl;
		}
		void flight()
		{
			cout<<"some birds can fly some can not"<<endl;
		}
};
class sparrow:public bird
{
	public:
		void flight()
		{
			cout<<"sparrow can fly..!"<<endl;
		}
};
class ostrich:public bird
{
	public:
		void flight()
		{
			cout<<"ostrich cannot fly"<<endl;
		}
};
int main()
{
	bird b;
	sparrow s;
	ostrich o;
	b.intro();
	b.flight();
	s.intro();
	s.flight();
	o.intro();
	o.flight();
}