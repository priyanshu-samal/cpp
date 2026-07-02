#include <iostream>
#include <array>
#include <vector>
#include <stack>

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
    return 0;
}
