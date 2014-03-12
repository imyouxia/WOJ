#include<iostream>
#include<string>

using namespace std;

class student
{
public:
	string name;
	string birthday;
	string id;
	string major;
	void SetValue()
	{
		cin>>name>>birthday>>id>>major;
	}
	void out()
	{
		cout<<name<<' '<<birthday<<' '<<id<<' '<<major<<endl;
	}
};


int main()
{
	student stu[30];
	for(int i=0;i<30;i++) stu[i].SetValue();
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		string id;
		cin>>id;
		int j;
		for(j=0;j<30;j++)
		{
			if(id==stu[j].id)
			{
				stu[j].out();
				break;
			}
		}
		if(30==j) cout<<"Not found\n";
	}
	return 0;
}
