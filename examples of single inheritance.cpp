#include<iostream>
using namespace std;
class rectangle
{
	public:
		int l,w;
		void getdata(int len,int wid)
		{
			l=len;
			w=wid;
		}
};
class area:public rectangle
{
	public:
		Area()
		{
			int ar=l*w;
			cout<<"area:="<<ar;
		}
};
int main()
{
area a1;
a1.getdata(10,20);
a1.Area();
}