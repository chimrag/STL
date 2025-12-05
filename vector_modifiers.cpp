#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,20,30,40};

    // Insert at beginning
    v.insert(v.begin(),5);

    // Inssert 2 copies of a value
    v.insert(v.begin()+2,2,99)
    // {5,10,99,99,20,30,40}
    
    // Erase single elment
    v.erase(v.begin()+3);

    // Erase a range
    v.erase(v.begin(),v.begin()+2);

    // Print updated vector
    cout<<"After modifications :";
    for()
}