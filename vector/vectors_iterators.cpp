#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,20,30,40};

    cout<<"Using normal iterator";
    vector<int>::iterator it;
    for(it =v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Using reverse iterator";
    for(auto rit = v.rbegin(); rit!=v.rend(); rit++){
        cout<<*rit<<" ";
    }
    cout<<endl;
    return 0;
    }
