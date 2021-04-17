#include<bits/stdc++.h>
using namespace std;
int main()
{
    // basic syntax of vector --> [ vactor <data type > objName (size,value) ; ]
    // basic example of vector --> [ vactor <int>  v1 ; ] <-- here  v1 is a obj of vactor class.

    // Declaring a vector 
    // vector <int> v1 (size, value);    --> int type ka obj
    // vector <char> v1 (size, value);   --> char type ka obj
    // vector <double> v1 (size, value); --> double type ka obj
    // vector <float> v1 (size, value);  --> float type ka obj

/**************************** COMMENT ****************************
    
	vector <int> v1;          // without default size and default value
    vector <int> v2 {10};     // with default size is --> 1 and default value is --> 10
    vector <int> v3 {10,2};   // with default size --> 2 and also with default value -->10,2
    vector <int> v4 {10, 2,3,4,5}; // array type initilization default size --> 5 and value --> 10,2,3,4,5 

    vector <int> v5(v4.begin(), v4.end()); // initlization from others here v5 mein v4 ki begning value se end value tak vector copy ho jayegi

    int arr[]={1,2,3,4,5};
    vector <int> v6( arr, arr+5 ); // vector initlization from array [vector <int> v6 (baseAddressOfArray, baseAddress + specifiLoc)]
    for (int i=0; i<v6.size(); ++i)
		cout<< v6[i]; // result will be "12345"

**************************** COMMENT ****************************/

/**************************** COMMENT ****************************

vector <int> v7; // creating a vector v7 --> [ v7 is a obj of class vector ]
for (int i = 0; i < 5; ++i)
	v7.push_back(i);  // this loop is adding the values in vector from 0 to 4 

for (int i = 0; i < v7.size(); ++i) // [ i < v7.size() ] this condition meaind this loop will run 0 to v7.size() time and the value of v7.size is " 5 " so this loop will run from 0 to 5 times
	cout<<v7[i]<<" "; // this loop is printing the value of vector v7 and the result is --> 0 1 2 3 4


**************************** COMMENT ****************************/



// TAKING VALUE FROM USER IN VECTORS

vector <int> v8;
int input,num;
cout<<" Enter the size of vector --> ";
cin>>num;

for(int i=0; i<num; ++i)
{
    cout<<" Enter the value in index "<< i << " --> ";
    cin>>input;
    
    v8.push_back(input); //O(1) operation --> we cant directly take input from user to in vector thats why we ist take value in a variable name input and after that we are just push_back(input) the value of input variable in vector
}

for(int i=0; i<v8.size(); ++i)
    cout<<v8[i]<<" ";




}
