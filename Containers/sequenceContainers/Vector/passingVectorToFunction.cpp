#include<bits/stdc++.h>
using namespace std;

void print(vector <int> v ) // void paint(vector <int> &v) this is also allow
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}

int main()
{
    int num,input;
    cout<<" Enter the size of Vector --> ";
    cin>>num;
     vector <int> v1;
    for(int i=0; i<num; i++)
    {
        cout<<" Enter the value of index "<<i<<" --> ";
        cin>>input;
        v1.push_back(input);
    }
    print(v1);

}