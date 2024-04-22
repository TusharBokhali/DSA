#include<iostream.h>
#include<conio.h>
class ClassA
{
	public:

	int a,b,c,sum;
	void method()
	{
		cout<<"ENTER THE NUMBER A=>";
		cin>>a;
		cout<<"ENTER THE NUMBER B=>";
		cin>>b;
		cout<<"ENTER THE NUMBER C=>";
		cin>>c;
	}
	void methods()
	{       sum=0;
		sum=a+b+c;
		cout <<"sum=>"<<sum<<endl;
	}
};
class ClassB:public ClassA
{
	public:
	int multi;
	void multis()
	{
		multi=a*b*c;
		cout<<"multi=>"<<multi<<endl;
	}
};
class ClassC:public ClassB
{
	public:
	int minus;
	void Class()
	{
		minus=0;
		minus=a-b-c;
		cout<<"minus=>"<<minus<<endl;
	}
};
void main()
{
      clrscr();

      ClassC T;
      T.method();
      T.methods();
      T.multis();
      T.Class();

      getch();
}