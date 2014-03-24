#include<iostream>
#include<iomanip>
#include<cmath>

#define ZERO 1e-7

using namespace std;

double f(double x){return 2*pow(x,3)-4*pow(x,2)+3*x-6;}

int main()
{
	double y;
	while(cin>>y)
	{
		double ans=0,begin=-10000,end=10000;
		if(f(begin)>y||f(end)<y) cout<<"NULL\n";
		else
		{
		while((end-begin)>ZERO)
		{
			if(f(ans)<y)
			{
				begin=ans;
				ans=(begin+end)/2;
			}
			else if(f(ans)>y)
			{
				end=ans;
				ans=(begin+end)/2;
			}
		}
		cout<<setiosflags(ios::fixed)<<setprecision(4)<<ans<<endl;
		}
	}
	return 0;
}
