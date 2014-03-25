#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N,M;
	while(cin>>N>>M)
	{
		vector<int> s;
		int i;
		for(i = 0; i < M; i++)
		{
			int OP,id;
			cin>>OP>>id;
			if((OP == 1) && (s.size() < N))
			{
				s.push_back(id);
			}
			
			if(OP == 2)
			{
				if(!s.empty())
				{
					s.pop_back();
				}
			}
		}

		if(s.empty())
		{
			cout<<"NULL";
		}
		else
		{
			vector<int>::iterator iter;
			for(iter = s.end() - 1; iter != s.begin(); iter--)
			{
				cout<<*iter<<' ';
			}
			cout<<*iter<<' ';
			
		}
		cout<<endl;
	}
	return 0;
}
