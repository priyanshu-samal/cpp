#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <map>

using namespace std;


int main(){
    vector<int> vec={1,2,3};
    vector<int> vec2(3,2);
    vector<int>vec3(vec);
    for (auto it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<endl;
    }

    stack<int>s;
    s.push(1);
    s.push(12);
    s.push(21);
    s.push(11);

    cout<<s.top();

    map<int,string>m;
    m.insert({1,"priyanshu"});
    cout<<m.find(1);

    return 0;
}
