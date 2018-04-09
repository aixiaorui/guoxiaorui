#include<iostream>
using namespace std;
struct point
{
	double x;
	double y;
};
class line
{
public:
	line(double u,double v)
	{
		a=u;b=v;
	}
	void print()
	{
		cout<<"y="<<a<<"x+"<<b<<endl;
	}
	friend point setpoint(line&l1,line&l2);
private:
	double a,b;
};
point setpoint(line&l1,line&l2)
{
	point p;
	p.x=(l2.b-l1.b)/(l1.a-l2.a);
	p.y=(l1.a*l2.b-l2.a*l1.b)/(l1.a-l2.a);
	return p;
}
int main()
{
	point setp;
	line l1(2,3),l2(4,5);
	cout<<"直线l1:";
	l1.print();
	cout<<"直线l2:";
	l2.print();
	setp=setpoint(l1,l2);
	cout<<"直线l1和直线l2的交点:("<<setp.x<<","<<setp.y<<")"<<endl;
}