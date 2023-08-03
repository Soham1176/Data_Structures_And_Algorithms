#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {2,3,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"OR"<<endl;

    // vector<int> ::iterator it;
    // instead of using the iterator waali line will directly write auto
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    cout<<"OR"<<endl;

    for(int value : v) //in this we are just copying the values in value variable
    {
        cout<< value << " ";
    }
    cout<<endl;
    
    for(int &value : v) //as we are passing the reference after incrementing it will change the value
    {
        value++;
        cout<< value << " ";
    }
    cout<<endl;
    
    vector<pair<int,int>> v_p = {{1,2},{2,3}};
    // We can also use auto keyword to get the code small
    for (auto &value :v_p )
    {
        cout<<value.first<<" "<<value.second<<" "<<endl;
    }
    cout<<"OR"<<endl;
    for (auto value :v_p )
    {
        cout<<value.first<<" "<<value.second<<" "<<endl;
    }
    
    
}