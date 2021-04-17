#include<bits/stdc++.h>
using namespace std;

int print(vector <int> v)
{
    for(int i=0; i<v.size(); i++)
        cout<<" "<< v[i]<<" ";
    cout<<endl;
}

int main()
{
    int num,input;
    cout<< " Enter the size of vector --> ";
    cin>>num;

    vector <int> v1;
    for(int i=0; i<num; i++)
    {
        cout<< " Enter the valur of index" << i <<" --> ";
        cin>>input;
        v1.push_back(input);
    }

    cout<<" orignal vector is --> "<<endl;
    print(v1);

    cout<<" Vector after v1.pop_back(); --> "<<endl;
    v1.pop_back();
    print(v1);

    vector <int> :: iterator iter = v1.end();   //creating a itretor to point the ending value of vector
    cout<<" vector after v1.insert(iter,1,6); -->"<<endl;
    v1.insert(iter,1,6);                       //v1.insert(iter,1,6); // insert() 3 parameter mangta hai phla itretor or dusra jitni copy banani hai or teesra jiski copy banani hai
    print(v1);        

}