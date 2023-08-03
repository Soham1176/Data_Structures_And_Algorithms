// Array of Vectors 
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
	cout<<"size : "<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;

} 

int main()
{
	int N;
	cin>>N;//Creating N size ka array of vector
	vector<int> v[N];//N vectors present he
	for(int i=0;i<N;++i)
	{
		int n;//size of vector 
		cin>>n;
		for(int j=0;j<n;j++)
		{
			int x;//elements to put in that vector
			cin>>x;
			v[i].push_back(x);
		}
	}
	
	for(int i=0;i<N;++i)
	{
		printVec(v[i]);//printing array elements
	}
}