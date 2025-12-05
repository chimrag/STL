#include<bits/stdc++.h>
using namespace std;
int main(){
    // created a vector
    vector<int> v;
    // iserting elements
    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);
    // printing vectors
    cout<<"Vector elements:";
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<"\n";

    // Size and Capacity
    cout<<"Size:"<<v.size()<<"\n";
    cout<<"Capacity"<<v.capacity()<<"\n";
}