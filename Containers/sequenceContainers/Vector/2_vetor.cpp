#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,input;
    cout<<" Enter the size of vector -->";
    cin>>num;

    vector <int> v1;
    for(int i=0; i<num; i++)
    {
        cout<<" Enter the index "<<i<<" value --> ";
        cin>>input;
        v1.push_back(input);
    }

    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";

}