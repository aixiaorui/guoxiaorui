#include<iostream>
using namespace std;
class student
{
public:
	void scoretotalcount(double s)
	{
		score=s;
		total=total+score;
		count++;
	}
	static double sum()
	{
		return total;
	}
	static double average()
	{
		return total/count;
	}
private:
	double score;
	static double total;
	static double count;
};
double student::total=0;
double student::count=0;
int main()
{
	int i,n;double s;
	cout<<"������ѧ������:";
	cin>>n;
	student stu;
	for(i=1;i<=n;i++)
	{
		cout<<"�������"<<i<<"��ѧ���ķ���:";
		cin>>s;
		stu.scoretotalcount(s);}
	cout<<"�ܷ�:"<<student::sum()<<endl;
	cout<<"ƽ����:"<<
		student::average()<<endl;
}
