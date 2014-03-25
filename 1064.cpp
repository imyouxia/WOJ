#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int N,M;

	while(cin>>N>>M)
	{
		int i;
		list<int> l;
		for(i = 0; i < M; i++)
		{
			int op,id;
			cin>>op>>id;
			if((op == 1) && (l.size() < N))
			{
				l.push_back(id);
			}
	
			if(op == 2)
			{
				if(!l.empty())
				{
					l.pop_front();
				}

			}	
		}
		list<int>::iterator iter;
		if(l.empty())
			cout<<"NULL";
		else
		{
			for(iter = l.begin();iter != l.end(); iter++)
			{
				cout<<*iter<<' ';	
			}
		}	
		cout<<endl;
	}	
	return 0;
}
